#include <stdio.h>
int main()
{
    int n;
    int s=0;
    printf("Enter a number: ");
    scanf("%d",&n); 
    while(n>0)
    {
        int d=n%10;
        s=s+d;
        n=n/10;

    } 
    printf("The sum of the digits is: %d",s);
    return 0;
}