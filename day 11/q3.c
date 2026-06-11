# include<stdio.h>

int prime(int a)
{
    int c=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c>0)
    return 1;
    else
    return 0;
}

int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    int result=prime(a);
    if(result==1)
    printf("not a prime number");
    else
    printf("prime number");
    return 0;
}



