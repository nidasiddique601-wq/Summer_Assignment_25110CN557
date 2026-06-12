# include<stdio.h>

void fib(int a)
{
    int n1=0,n2=1,n3;
    n3=n1+n2;
    for(int i=1;i<=a;i++)
    {   printf("%d ",n1);

        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
   printf("\n");}

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    fib(a);   
    return 0;
    
}
