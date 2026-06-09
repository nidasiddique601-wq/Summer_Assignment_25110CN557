# include<stdio.h>
int main()
{
    int i;int j;
    for(i=1;i<=5;i++)
    {int k=1;
        for(j=5;j>=i;j--)
        {   
            printf("%d",k);
            k++;
        }

    printf("\n");
    }return 0;

}
