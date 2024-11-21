#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y);

int main(void)
{
    puts("before call the function\n");
    int x = 10;
    int y = 20;

    puts("function results");

    int c = sum(x, y);
    printf("results = %d.\n", c);
}

int sum(int x, int y)
{
    puts("on the function");
    printf("&x = %p, a = %d\n",&x, x);
    printf("&y = %p, y = %d\n", &y, y);
    int z = x + y;

    printf("&z = %p, z = %d\n", &z, z);
    return z;
}