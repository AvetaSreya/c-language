//The distance between two cities (in km.) is input through the 
//keyboard. Write a program to convert and print this distance 
//in meters, feet, inches and centimeters. 

#include<stdio.h>
int main(){
    float kilometer;
    printf("enter the distance","%f\n");
    scanf("%f",&kilometer);
    float meter = kilometer*1000;
    float feet = kilometer*3280.84;
    float inches = kilometer*39370.1;
    float centimeters= kilometer*100000;
    
    printf("%.2f in meters\n",meter);
    printf("%.2f in meters\n",feet);
    printf("%.2f in meters\n",inches);
    printf("%.2f in meters\n",centimeters);
    return 0;
}
