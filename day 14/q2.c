# include<stdio.h>
int main()
{
    int a; int item;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; int c=0;
    printf("enter the element whose frequency is to be defined");
    scanf("%d",&item);
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    
    for(int i=0;i<a;i++)
    { 
        
            if(n[i]==item)
            c++;
    }
        
        printf("frequency of element %d =%d",item,c);

    
    return 0;

}
