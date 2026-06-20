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
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=a[j][i])
           {printf("not symmentric");
            return 0;}
}
    }
    printf("symmetric matrix");
    return 0;
}

