#include <stdio.h>
int main()
{
    int n;
    int c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }   
    printf("Number of digits is %d\n",c);
    return 0;
}