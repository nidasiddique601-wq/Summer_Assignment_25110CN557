# include<stdio.h>
int main()
{
    int a;int sum=0; int avg=0;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a];
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    for(int i=0;i<a;i++)
    {
        sum=sum+n[i];
    }
    avg=sum/a;
    printf("sum of array elements = %d",sum);
    printf("\n average of array elements =%d",avg);
        return 0;
}


