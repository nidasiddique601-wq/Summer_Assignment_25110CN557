#include <stdio.h>
int main()
{
    int n;int ans=0;int conti=1;int r;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r==1)
       { ans+=conti;}
        n=n/10;
        conti*=2;
    }
    printf("decimal equivalent=%d",ans);
}
