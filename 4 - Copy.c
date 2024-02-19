// swap two numbers with0ut third variable
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d" , &a,&b);
    printf("/n numbers before swapping");
    printf("a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("/n numbers after swapping");
    printf("a=%d b=%d",a,b);
    
    return 0;

}