#include <stdio.h>
int main()
{
    int n;
    int x=1;
    printf("Enter Range : ");
    scanf("%d" ,&n);
    while(x<=n)
    {
        if(x%2==0)
        {
            printf("%d  ",x);
        }
        else
        {
            printf("%d \n" ,x);
        }
        ++x;
    }
    return 0;
}
