// input radius output area and circumference
#include<stdio.h>
int main()
{
    int r;
    float a,c;
    printf("\nEnter radius");
    scanf("%d", &r);
    a=(22.0/7)*r*r;
    printf("\nArea of the circle is %f",a);
    c=2*(22.0/7)*r;
    printf("\nCircumference of the circle is %f",c);
    return 0;



}