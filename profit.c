//If the total selling price of 15 items and the total profit earned 
//on them is input through the keyboard, write a program to 
//find the cost price of one item.
#include <stdio.h>

int main() {
    float total_sp, total_profit, total_cp, cp_one;

    printf(" total selling price: ");
    scanf("%f", &total_sp);

    printf(" total profit: ");
    scanf("%f", &total_profit);

    total_cp = total_sp - total_profit;
    cp_one = total_cp / 15;

    printf("Cost price of 1 item %.2f\n", cp_one);

    return 0;
}
