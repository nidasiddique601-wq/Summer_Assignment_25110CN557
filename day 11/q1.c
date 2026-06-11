# include<stdio.h>

int sum(int a, int b)
{
    return (a+b);
}

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
        printf("sum of two numbers=%d",result);
     return 0;

}


