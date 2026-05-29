#include <stdio.h>
int main()
{
    int n;
    int rev=0;
    printf("Enter a number: ");
    scanf("%d",&n); int org=n;
    while(n>0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;

    }
    if(org==rev)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
    return 0;
}