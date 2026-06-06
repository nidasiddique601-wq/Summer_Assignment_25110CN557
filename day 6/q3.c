#include <stdio.h>
int main()
{
    int n;int ans=0;int conti=1;int r;int c=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        if(r==1)
       { ans+=conti;}
        n=n/2;
        conti*=10;
    }
    while(ans>0)
    {
        int d=ans%10;
        if(d==1)
        {c++;}
        ans=ans/10;
    }
    printf("no of set bits in a number= %d",c);
    return 0;
    
}
