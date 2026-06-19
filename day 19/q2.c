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
int sub[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        sub[i][j]=a[i][j]-b[i][j];
    }
    printf("\n");
}printf("subtracted matrix=\n");
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
      printf("\t %d",sub[i][j]);
    }
    printf("\n");
}


 return 0;

}
