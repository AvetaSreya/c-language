//If a five-digit number is input through the keyboard, write a 
//program to reverse the number. 
#include<stdio.h>
int main(){
    int num,reverse =0,remainder;
    scanf("%d\n",&num);
    if(num<10000 || num>999999)
    {
        printf("enter a valid digit number\n");
        return 1;
    }
    while(num!=0){
        remainder=num % 10;
        reverse=reverse*10+remainder;
        num /=10;
    }
    printf("reversed number %d",reverse);
    return 0;
}