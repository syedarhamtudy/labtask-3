#include <stdio.h>

int main() {
    float Principal, Interest_Rate, Interest_Amount, TotalAmount;
    
    printf("Enter the principal amount: ");
    scanf("%f", &Principal);
    
    printf("Enter the interest rate in % : ");
    scanf("%f", &Interest_Rate);

    Interest_Amount = (Principal * Interest_Rate) / 100;
    TotalAmount = Principal + Interest_Amount;
    printf("Interest earned over a year: %f \n", Interest_Amount);
    printf("Total amount after adding interest: %f \n", TotalAmount);

    return 0;
}
