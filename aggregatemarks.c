//If the marks obtained by a student in five different subjects 
//are input through the keyboard, find out the aggregate marks 
//and percentage marks obtained by the student. Assume that 
//the maximum marks that can be obtained by a student in each 
//subject is 100.

#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,total,avg,aggregate;
    scanf("%f\n %f\n %f\n %f\n %f\n",&sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    scanf("%.2f\n",&total);
    printf("%.2f\n",total);
    avg= total/600;
    scanf("%.2f",&avg);
    printf("%.2f\n",avg);
    aggregate=(total/600)*100;
    scanf("%.2f",&aggregate);
    printf("%.2f\n",aggregate);
    return 0;

}