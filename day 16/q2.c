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
    int f[a];int c=0;int l=0;int e;
    for(int i=0;i<a;i++)
    {  c=0;
      for(int j=0;j<a;j++)
      {
        if(n[i]==n[j])
        c++;
      }
      if(c>l)
      {
        l=c;
e=n[i];

      }}
    printf("the element with maximum frequency =%d and freuqency=%d ",e,l);
    return 0;

}
