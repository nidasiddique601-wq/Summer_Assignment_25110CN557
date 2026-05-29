#include <stdio.h>
int main()
{
    int n;
    int p=1;
    printf("Enter a number: ");
    scanf("%d",&n); 
    while(n>0)
    {
        int d=n%10;
        p=p*d;
        n=n/10;

    }
    printf("The product of the digits is: %d",p);
    return 0;
}