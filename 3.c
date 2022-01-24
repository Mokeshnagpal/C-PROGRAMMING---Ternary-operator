#include <stdio.h>
int main()
{
    printf("Input a number -\n");
    int a=0,b=0;
    scanf("%d",&a);
    printf("Input another number -\n");
    scanf("%d",&b);
    printf("%d is the largest among the two",(a>b)?a:b);
    return 0;
}
