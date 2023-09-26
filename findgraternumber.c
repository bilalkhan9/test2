// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("enter number");
    scanf("%d",&num1);
    printf("enter numberer2");
    scanf("%d",&num2);
    printf("enter number3");
    scanf("%d",&num3);
    if(num1>num2)
    {
        printf("%d is greatest numberx`",num1);
    }
    else if (num2>num1)
    {
        printf("%d is greatest number",num2);
        
    }
    else if(num3>num2)
    {
        printf("%d is greatest number",num3);
    }
    else if (num2>num3)
    {
        printf("%d is greatest number",num2);
    }
    else if (num3>num1)
    {
        printf("%d is greatest number",num3);
    }
    else if  (num1>num3)
    {
    printf("%d is greatest number",num1);
        
    }
    
    

    return 0;
}
