#include <stdio.h>
int main()
{
    int n1=0;
    int n2=1;
    int n3=n1+n2;
    int k;
    printf("enter number of terms");
    scanf("%d",&k);
    printf(" \n %d \n %d",n1,n2);
    for(int i=3;i<=k;i++)
    {
        printf("\n %d",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    return 0;
    }
