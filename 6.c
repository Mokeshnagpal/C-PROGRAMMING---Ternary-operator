#include <stdio.h>
int main()
{
    printf("Input a year -\n");
    int a=0,b=0,c=0;
    scanf("%d",&a);
    printf((a%400==0)?"LEAP YEAR":((a%100)?"NOT A LEAP YEAR":((a%4)?"LEAP YEAR":"NOT A LEAP YEAR")));
    return 0;
}
