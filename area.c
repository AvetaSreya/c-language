//The length & breadth of a rectangle and radius of a circle are 
//input through the keyboard. Write a program to calculate the 
//area & perimeter of the rectangle, and the area & 
//circumference of the circle. 

#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    float radius,circum;
    //reading length&breadth
    scanf("%f %f %f %f",&length,&breadth,&area,&perimeter);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("The area and perimeter of a rectangle are:%f and %f\n",area,perimeter);
    //reading radius of circle
    radius=length;
    scanf("%f %f %f",&radius,&circum,&area);
    printf("radius of circle is:%f\n",radius);
    circum=2*3.14*radius;
    area=3.14*radius*radius;
    printf("The area and circum of circle are:%f and %f",area,circum);
  return 0;
  }