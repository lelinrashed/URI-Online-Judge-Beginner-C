#include<stdio.h>


int main()
{
    double spent_time, average_speed, fuel_spent;

    scanf("%lf %lf", &spent_time, &average_speed);

    fuel_spent = (spent_time * average_speed) / 12;

    printf("%.3lf\n", fuel_spent);

    return 0;
}