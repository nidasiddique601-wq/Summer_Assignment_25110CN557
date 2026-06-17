# include<stdio.h>
int main()
{
    int a; 
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; 
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    int b; 
    printf("enter a size of 2nd array");
    scanf("%d",&b);
    int m[b]; 
    printf("enter elements of an array");
    for(int i=0;i<b;i++)
    {
        scanf("%d",&m[i]);

    } 
    for(int i=0;i<a;i++)
    {
      for(int j=0;j<b;j++)
      {
        if(n[i]==m[j])
        
        printf(" %d",n[i]);

      }
      
    }
    
  
    return 0;

}
