# include<stdio.h>
int main()
{
    char i;int j;int k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(5-i);j++)
        {   
             printf(" ");}
            for(k=1;k<=i;k++)
            {
                
            printf("%d",k);
        }
        for(int l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
    printf("\n");}
    
    return 0;

}
