#include <stdio.h>
int main() 
{
    int a,b;
    printf("Enter value of a,b :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A : %d\n",a);
    printf("B : %d",b);
    return 0;
}
