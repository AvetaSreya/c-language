//Temperature of a city in Fahrenheit degrees is input through 
//the keyboard. Write a program to convert this temperature 
//into Centigrade degrees. 

#include<stdio.h>
int main(){
    float farenheit,celsius;
    scanf("%f",&farenheit);
    printf("enter the temperature in farenheit:%f\n",farenheit);
    celsius=(farenheit*9/5)+32;
    printf("temperature in celsius is:%.2f",celsius);
    return 0;  
}