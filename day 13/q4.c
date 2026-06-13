# include<stdio.h>
int main()
{
    int a;int ceven=0; int codd=0;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; 
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    for(int i=0;i<a;i++)
    { 
        if(n[i]%2==0)
        ceven++;
        else
        codd++;
    }
    printf("count of even numbers = %d and odd numbers = %d",ceven,codd);
            return 0;
}


