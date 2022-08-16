#include <stdio.h> 
int main()
{
    int age;
    printf("Enter the age - ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Valid age");
    }
    else
    {
        printf("Invalid age");
    }
    return 0;
}

    