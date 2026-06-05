#include <stdio.h>
int main()
{
    int n; int largest=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            largest=i;
            n=n/i;

        }
    }
if(n>1)
{
    printf("%d",n);
    largest=n;
}printf("\n largest prime factor=%d\n",largest);
return 0;
}
