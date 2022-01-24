#include <stdio.h>
int main()
{
    printf("Input a sales -\n");
    int a=0;
    scanf("%d",&a);
    int x=(a>=10)?15:20;
    printf("Discount - %d",x);
    return 0;
}
