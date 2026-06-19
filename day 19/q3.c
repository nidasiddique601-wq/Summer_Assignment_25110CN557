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

int t[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        
        t[i][j]=a[j][i];
    }

    printf("\n");
}
printf("transported matrix=\n");
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
      printf("\t %d",t[i][j]);
    }
    printf("\n");
}


 return 0;

}
