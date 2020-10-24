#include<stdio.h>

int main()
{
    // Initialize variable
    double n = 3.14159, s, area;

    // Get value from user
    scanf("%lf", &s);

    // Calcualtion area
    area = n * s * s;

    // Output the value
    printf("A=%0.4f\n", area);

    return 0;
}


