# include<stdio.h>
int main()
{
    char i;int j;int k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(5-i);j++)
        {   
             printf(" ");}
            for(k=0;k<i;k++)
            {
                
            printf("%c",'A'+k);
        
        }
        for( l=i-2;l>=0;l--)
        {
            printf("%c",'A'+l);
            
        }
    printf("\n");}
    
    return 0;

}
