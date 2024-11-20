#include <stdio.h>
#include <stdlib.h>

void pointer_to_pointer(void);
void test2(void);
void test(void);

int main(void)
{
    test();
    pointer_to_pointer();
    test2();
}


void test(void)
{
    printf("\n-------Test 1-------\n");
    int a = 10;
    int *p1 = NULL;
    int *p2 = NULL;

    printf("&a = %p\n", &a);
    printf("&p1 =  %p, p1 = %p\n", &p1, p1 );
    printf("&p2 = %p, p2 =  %p\n\n", &p2, p2);

    p1 = &a;
    p2 = p1;



    // here, you wanna go in the adress wicth one p2 is ponting and give to her the value of 4
    // *p2 = 4;

    printf("&p1 =  %p,p1 =  %p, *p1 = %d\n\n", &p1, p1, *p1);

    *p2 = 4;
    printf("&p2 =  %p, p2 = %p, *p2 =  %d\n", &p2, p2, *p2);
    printf("&p1 =  %p, p1 = s %p, *p1 = %d\n\n", &p1, p1, *p1);


    printf("the value of a is %d\n\n\n", *p2);
}


void pointer_to_pointer(void)
{
    printf("\n-------test 2-------\n");
    int neymar = 10;

    int *neymar_mailman = &neymar;
    printf("&neymar = %p, neymar = %d.\n", &neymar, neymar);

    printf("&neymar_mailman = %p.\n", &neymar_mailman);

    int **mailman_boss = &neymar_mailman;

    printf("&mailman_boss =  %p.\n\n", &mailman_boss);

    **mailman_boss = 11; 

    printf("neymar = %d.\n \n \n", neymar);

    printf("\n-------test 3-------\n");
    // another test
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 =  %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1 );
    printf("&p2 = %p, p2 =  %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    **p2 = 99;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 =  %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1 );
    printf("&p2 = %p, p2 =  %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);
}

void test2(void)
{
    printf("\n-------test 4-------\n");
    float z = 2.5;
    float *fp;

    fp = &z;

    printf("*&z = %.2f\n", *&z); 
    // -> get the adress of z -> get the content of the adress of z -> *(0x 3456) ->go there and give back the content of this space of memmory -> 2.5
    printf("*fp = %.2f\n", *fp);
    // go to the adress wicth one fp is pointing and gave me bacjk theh value of that space of memmory -> 2.5
    printf("**&fp = %.2f\n\n\n", **&fp); 
    // go to the local witch one fp is stored -> **(0x 1234) now, gave to me the content that was stored here -> *(0x 3456) now go there and give back the content of this space of memmory -> 2.5
}