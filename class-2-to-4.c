#include <stdio.h>

void test(void);

int main(void)
{
    int neymar = 10;

    int *neymar_mailman = &neymar;
    printf("neymar adress %p.\n", &neymar);

    printf("neymar mailman adress %p.\n", &neymar_mailman);

    printf("the value is %d\n", *neymar_mailman);

    test();
}


void test(void)
{
    printf("\nTest function\n");
    int a = 10;
    int *p1 = NULL;
    int *p2 = NULL;

    printf("The adress of a %p\n", &a);
    printf("The adress of p1 %p, and the value is %p\n", &p1, p1);
    printf("The adress of p2 %p, and the value is %p\n\n", &p2, p2);

    p1 = &a;
    p2 = p1;



    // here, you wanna go in the adress wicth one p2 is ponting and give to her the value of 4
    // *p2 = 4;

    printf("The adress of p1 %p, and the value of the pointer is %p, and the value of the local where p1 is pointing is %d\n\n", &p1, p1, *p1);

    *p2 = 4;
    printf("The adress of p2 %p, and the value of the pointer is %p, and the value of the local where p2 is pointing is %d\n", &p2, p2, *p2);
    printf("The adress of p1 %p, and the value of the pointer is %p, and the value of the local where p1 is pointing is %d\n\n", &p1, p1, *p1);


    printf("the value of a is %d", *p2);
}