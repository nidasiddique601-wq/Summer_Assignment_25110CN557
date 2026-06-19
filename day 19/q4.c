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
int diagsum=0;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
      if(i==j||(i+j)==(r-1))
     diagsum+=a[i][j];
    }
    printf("\n");
}
printf("diagonal sum=%d", diagsum);

 return 0;

}

