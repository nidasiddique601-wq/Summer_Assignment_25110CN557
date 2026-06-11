# include<stdio.h>

int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int result=max(a,b);
        printf("maximum of two numbers=%d",result);
     return 0;

}
