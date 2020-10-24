#include<stdio.h>

int main()
{
    float x, y, z, average;

    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    average = (x*2+y*3+z*5)/(2+3+5);

    printf("MEDIA = %.1f\n", average);

    return 0;
}