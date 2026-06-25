# include<stdio.h>
int main()
{
   int n;int temp;
   printf("enter size of 1st array");
   scanf("%d",&n);
   int a[n];
   printf("enter elements of 1st array");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   int m;
   printf("enter size of 2nd array");
   scanf("%d",&m);
   int b[m];
   printf("enter elements of 2nd array");
   for(int i=0;i<m;i++)
   {
      scanf("%d",&b[i]);
   }
   int c[n+m];
   for(int i=0;i<n;i++)
   {
      c[i]=a[i];
   }
   for(int i=0;i<m;i++)
   {
     c[n+i]=b[i];
   }
   for(int i=0;i<n+m-1;i++)
   {
      for(int j=0;j<n+m-1-i;j++)
      {
         if(c[j]>c[j+1])
         {
            temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
         }
      }
   }
   printf("the merged array=\n");
   for(int i=0;i<n+m;i++)
   {
      printf("%d\t",c[i]);
   }
   
   return 0;
}

