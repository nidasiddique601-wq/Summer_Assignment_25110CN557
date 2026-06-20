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

int r1,c1; 
    printf("enter row and column of 2nd matrix");
    scanf("%d",&r1);
     scanf("%d",&c1);
    int b[r1][c1];
    printf("enter elements of an matrix");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {

        scanf("%d",&b[i][j]);

    }
    printf("\n");
}

int m[r][c1];int sum=0;
if(c != r1)
{
    printf("multiplication not possible");

}
else
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<c1;k++)
            {
                sum+=a[i][k]*b[k][j];

            }
            m[i][j]=sum;
            sum=0;
        }
    }

printf("multiplied matrix=\n");
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c1;j++)
        {

        printf("\t %d", m[i][j]);

    }
    printf("\n");
}

}

 return 0;

}
