//Ramesh’s basic salary is input through the keyboard. His 
//dearness allowance is 40% of basic salary, and house rent 
//allowance is 20% of basic salary. Write a program to calculate 
//his gross salary.
#include<stdio.h>
int main()
{
    float bsal,da,hrent,gsal;
    scanf("%f %f %f %f",&bsal,&da,&hrent,&gsal);
    printf("%f\n",bsal);
    da=0.4*bsal;
    hrent=0.2*bsal;
    gsal=bsal+da+bsal;
    printf("%.2f\n",da);
    printf("%.2f\n",hrent);
    printf("%.2f\n",gsal);
    return 0;
}
    