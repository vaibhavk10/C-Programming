#include <stdio.h> 
int main()
{
    int r;
    float area,circumference;
    printf("Enter the radius - ");
    scanf("%d",&r);
    area=2*3.14*r;
    circumference=3.14*r*r;
    printf("area %f\nCircumference %f",area,circumference);
    return 0;
}

    