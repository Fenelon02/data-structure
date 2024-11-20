#include <stdio.h>

int main() {
    int a;

    printf("sizeof(a) = %zu bytes\n", sizeof(a));

    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(short) = %zu bytes\n", sizeof(short));
    printf("sizeof(long) = %zu bytes\n", sizeof(long));
    printf("sizeof(unsigned long) = %zu bytes\n", sizeof(unsigned long));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n\n", sizeof(double));

    printf("sizeof(void *) = %zu bytes\n", sizeof(void *));
    printf("sizeof(int *) = %zu bytes\n", sizeof(int *));
    printf("sizeof(int **) = %zu bytes\n", sizeof(int **));
    printf("sizeof(int ***) = %zu bytes\n", sizeof(int ***));
    printf("sizeof(float *) = %zu bytes\n", sizeof(float *));

    return 0;
}
