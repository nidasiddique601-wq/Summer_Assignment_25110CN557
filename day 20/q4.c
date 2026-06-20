# include<stdio.h>
int main()
{
    int r,c; 
    printf("enter row and column of 1st matrix");
    scanf("%d",&r);
     scanf("%d",&c);
    int a[r][c];
    printf("enter elements of an matrix");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

        scanf("%d",&a[i][j]);

    }
    printf("\n");
}
int sum=0;
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
        sum+=a[j][i];
    }
    printf("\n sum of %d column= \t %d", i+1,sum);
    sum=0;
}
    return 0;
}

