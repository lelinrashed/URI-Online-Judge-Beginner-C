#include<stdio.h>
#include<math.h>

int main()
{
    int r;
    float sphere;

    scanf("%d", &r);

    printf("VOLUME = %.3lf\n", (4 * 3.14159 * pow(r, 3)) / 3);

    return 0;
}