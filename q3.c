#include <stdio.h>
int main()
{
    int n;
    int x=1;
    printf("Enter Range : ");
    scanf("%d" ,&n);
    while(x<=n)
    {
        printf("%d ",x);
        ++x;
    }
    return 0;
}
