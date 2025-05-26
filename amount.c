//A cashier has currency notes of denominations 10, 50 and 
//100. If the amount to be withdrawn is input through the 
//keyboard in hundreds, find the total number of currency notes 
//of each denomination the cashier will have to give to the 
//withdrawer.
#include<stdio.h>
int main(){
    int amount,amount_in_rs;
    scanf("%d\n",&amount);
    amount_in_rs=amount*100;
    scanf("%d\n,&amount_in_rs");

    int hundred,fifty,ten;
    hundred=amount_in_rs/100;
    amount_in_rs = amount_in_rs % 100;

    fifty=amount_in_rs/50;
    amount_in_rs = amount_in_rs % 50;
    
    ten=amount_in_rs/10;
    printf("amount in hundreds :%d\n",hundred);
    printf("amount in fifty %d\n:",fifty);
    printf("amount in ten :%d\n",ten);

}