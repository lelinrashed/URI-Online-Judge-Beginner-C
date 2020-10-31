#include <stdio.h>

int main() {
    int note100, note50, note20, note10, note5, note2;
    int m1, m50, m25, m10, m05, m01;
    double n;

    scanf("%lf", &n);
    int notas = n;
    int coins = (n - notas) * 100;

    if((coins * 1000) % 10 == 9){
        coins++;
    }


    note100 = notas/100;
    notas = notas%100;
    note50 = notas/50;
    notas = notas%50;
    note20 = notas/20;
    notas = notas%20;
    note10 = notas/10;
    notas = notas%10;
    note5 = notas/5;
    notas = notas%5;
    note2 = notas/2;
    notas = notas%2;

    m1 = notas/1;
    notas = notas%1;
    m50 = coins/50;
    coins = coins%50;
    m25 = coins/25;
    coins = coins%25;
    m10 = coins/10;
    coins = coins%10;
    m05 = coins/5;
    coins = coins%5;
    m01 = coins/1;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}