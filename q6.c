#include <stdio.h>
int main() 
{
    int a,b,choice;
    printf("Enter two values : ");
    scanf("%d%d" ,&a,&b);
    printf("Enter choice : \n1 - addition \n2 - subtraction \n3 - multiplication \n4 - modulus \n5 - divison \n");
    scanf("%d" ,&choice);
    switch(choice)
    {
        case 1:
        printf("Addition : %d" ,a+b);
        break; 
        
        case 2:
        printf("Subtraction : %d" ,a-b);
        break;
        
        case 3:
        printf("Multiplication : %d" , a*b);
        break;
        
        case 4:
        printf("Modulus : %d" , a%b);
        break;
        
        case 5:
        printf("Divison : %d" , a/b);
        break;
        
        default:
        printf("Wrong Input");
    }
    return 0;
}
