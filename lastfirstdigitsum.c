//If a four-digit number is input through the keyboard, write a 
//program to obtain the sum of the first and last digit of this 
//number.

#include<stdio.h>
int main(){
    int num,first,last;
    printf("enter num\n");
    scanf("%d %d %d",&num,&first,&last);

    if(num<1000 || num>9999){
        printf("enter 4 digit\n");
        return 1;
    }
    last=num % 10;
    first = num/1000;
    printf("sum of first and last=%d",last+first);
    return 0;
}