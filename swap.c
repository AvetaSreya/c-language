//Two numbers are input through the keyboard into two 
//locations C and D. Write a program to interchange the 
//contents of C and D. 

#include<stdio.h>
int main(){
    int a,b,temp;
    scanf("%d\n %d\n",&a,&b);
    printf("before swap:\n %d\n %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap:\n %d\n %d\n",a,b);
        return 0;
}