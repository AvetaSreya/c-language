#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("Largest: %d\n",a);
    }
    else if(b>=c && b>=c){
        printf("Largest: %d\n",b);
    }
    else{
        printf("largest: %d\n",c);
    }
    return 0;
}