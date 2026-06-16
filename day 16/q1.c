# include<stdio.h>
int main()
{
    int a; int j=0;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; int aa=a+1;
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    int s=0; int ss=0;
    s=aa*(aa+1)/2;
    for(int i=0;i<a;i++)
    {
      ss=ss+n[i];
    }
    
    printf("the missing number in the array is=%d",s-ss);
    return 0;

}
