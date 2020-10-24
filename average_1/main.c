#include<stdio.h>

int main()
{
    float x, y, average;

    scanf("%f", &x);
    scanf("%f", &y);

    average = (x*3.5+y*7.5)/(3.5+7.5);

    printf("MEDIA = %.5f\n", average);

    return 0;
}
