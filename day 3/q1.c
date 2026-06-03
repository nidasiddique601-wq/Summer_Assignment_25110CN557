#include <stdio.h>
int main()
{
    int n; int c=0; 
    printf("enter a number");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }

    if(c==0)
    printf("prime number");
    else
    printf("not a prime number");
    return 0;
}
