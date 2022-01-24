#include <stdio.h>
int main()
{
    printf("Input a number -\n");
    int a=0;
    scanf("%d",&a);
    printf(((a%2)!=0)?"ODD":"EVEN");
    return 0;
}
