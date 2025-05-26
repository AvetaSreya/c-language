//In a town, the percentage of men is 52. The percentage of 
//total literacy is 48. If total percentage of literate men is 35 of 
//the total population, write a program to find the total numberof illiterate men and women if the population of the town is 
//80,000.
#include<stdio.h>
int main(){
    int population=80000;
    int men=(52*population)/100;
    int women=population - men;

    int total_literate=(48*population)/100;
    int literate_men=(35*population)/100;
    int literate_women = total_literate - literate_men;
   
    int illiterate_men = men - literate_men;
    int illiterate_women = women - literate_women;

    printf(" total population : %d\n",80000);
    printf("number of men : %d\n",men);
    printf("number of women : %d\n",women);
    printf("literate men : %d\n",illiterate_men);
    printf("literate women %d\n",literate_women);
    printf("illiterate women : %d\n",illiterate_women);
    printf("illiterate men : %d\n",illiterate_men);
    printf("total illiterate : %d\n",illiterate_men+illiterate_women);
    return 0;    
}