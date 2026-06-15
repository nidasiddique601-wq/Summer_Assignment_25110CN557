# include<stdio.h>
int main()
{
    int a; int item;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; int m[a];
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    
    for(int i=0;i<a;i++)
    { 
      m[i]=n[a-1-i];
      
    }
    
    printf("reverse of an array");
    for(int i=0;i<a;i++)
    {
        printf("\n %d",m[i]);

    }

    return 0;

}

