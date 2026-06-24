# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    printf("enter a word");
   scanf("%s",str);
   char str1[100];
    printf("enter another word");
   scanf("%s",str1);
   if(strlen(str)!=strlen(str1))
  { printf("not rotation");
    return 0;}
   char temp[100];
   strcpy(temp,str);
   strcat(temp,str);
   if(strstr(temp,str1))
   printf("rotation");
   else
   printf("not rotation");
   return 0;
}
