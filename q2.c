#include <stdio.h>
int main() 
{
    int age;
    printf("Enter age : ");
    scanf("%d" ,&age);
    if(age>17)
    {
        printf("Voting is Eligible");
    }
    else
    {
        printf("Voting is not Eligible");
    }
    return 0;
}
