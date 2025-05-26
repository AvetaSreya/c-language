//If a five-digit number is input through the keyboard, write a 
//program to calculate the sum of its digits.

#include<stdio.h>
int main(){
    int num,sum=0,remainder;
    scanf("%d\n",&num);
    while(num!=0){
        remainder=num % 10;
        sum+=remainder;
        num /=10;
    }
    printf("sum=%d",sum);
    return 0;
}