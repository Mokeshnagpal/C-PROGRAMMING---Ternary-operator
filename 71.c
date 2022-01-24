#include <stdio.h>
int main()
{
    printf("Input a sales -\n");
    int a=0;
    scanf("%d",&a);
    int dis=(a>=25000)?5000:250;
    printf("Discount - %d",dis);
    return 0;
}
