#include <stdio.h>
int main()
{
    printf("Input a sales -\n");
    int p=0;
    scanf("%d",&p);
    double k=(p>4780)?((p*5)/100):((p*10)/100);
    printf("Value of k - %lf",k);
    return 0;
}
