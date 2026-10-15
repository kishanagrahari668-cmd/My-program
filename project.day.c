#include<stdio.h>
int main()
{
    int x;
    printf("Enter two numbers");
    scanf("%d",&x);
    if(x<70)
    {
        printf("order confirmed\nThank You!");
    }

    else
    {
        printf("Order is not confirmed\nThank You!");
    }
    return 0;
}