#include<stdio.h>

int main()
{
    int employee_number, worked_hour;
    float salary;

    scanf("%d %d %f", &employee_number, &worked_hour, &salary);

    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", (float)(worked_hour * salary));

    return 0;
}