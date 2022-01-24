#include <stdio.h>
int main()
{
    printf("Input a number -\n");
    int a=0,b=0,c=0;
    scanf("%d",&a);
    printf("Input another number -\n");
    scanf("%d",&b);
    printf("Input another number -\n");
    scanf("%d",&c);
    int g=(a<b&&a<c)?a:c;
    g=(b>c)?b:c;
    printf("Value of g - %d",g);
    return 0;
}
