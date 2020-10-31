// bhaskara's formula
// D = b2 − 4ac

#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, sqrtResult;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (((b * b) - 4 * a * c) < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        sqrtResult = sqrt((b * b) - 4 * a * c);
        printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + sqrtResult) / (2 * a)), ((-b - sqrtResult) / (2 * a)));
    }

    return 0;
}