#include<stdio.h>

int main()
{
    char name[20];
    float salary, total_sales, total_salary;

    scanf("%s", &name);
    scanf("%f %f", &salary, &total_sales);

    total_salary = (15*total_sales)/100;

    printf("TOTAL = R$ %.2f\n", salary + total_salary);

    return 0;
}