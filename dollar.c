#include <stdio.h>

int main(){

    float usd, gbp, jpy, exchange_tax;

    printf("Enter the value of usd: ");
    scanf("%f", &usd);

    exchange_tax = 0.1*usd;
    usd -= exchange_tax;

    gbp = (usd/2)*0.79;
    jpy = (usd/2)*127.65;

    printf("Exchange tax = %.2f\n", exchange_tax);
    printf("In british pound = %.2f\n", gbp);
    printf("In japanese yen = %.0f\n", jpy);






}