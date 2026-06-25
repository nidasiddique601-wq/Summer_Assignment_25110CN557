# include<stdio.h>
# include<string.h>
int main()
{
   char str1[100];
   char str2[100];
   printf("enter 1st string");
   fgets(str1,100,stdin);
   printf("enter 2nd string");
   fgets(str2,100,stdin);
   int l1=strlen(str1);
   int l2=strlen(str2);
   printf("common characters are : \t");
   for(int i=0;i<l1;i++)
   {
      for(int j=0;j<l2;j++)
      {
         if(str1[i]==str2[j])
         {
            printf("%c\t",str1[i]);
            break;
         }
      }
   }
   return 0;
}

