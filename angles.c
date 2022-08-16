#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the angles - ");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("Valid Angles");
    }
    else
    {
        printf("Invalid Angles");
    }
    
    return 0;
}
