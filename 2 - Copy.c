// swap two number with third variable
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers\n");
    scanf("%d %d" , &a,&b);
    printf("/n numbers before swapping");
    printf("a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("/n numbers after swapping");
    printf("a=%d b=%d",a,b);
    
    return 0;

}
