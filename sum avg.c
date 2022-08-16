#include <stdio.h> 
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter the integers\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("The sum is %d\nThe average is %f",sum,avg);
    return 0;
}

    