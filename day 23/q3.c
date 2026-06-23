# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];char str1[100];
    int length=strlen(str);
    printf("enter a word");
   fgets(str,100,stdin);
    printf("enter a second word");
   fgets(str1,100,stdin);
   
     if(strlen(str)!=strlen(str1))
     {
        printf("not anagram");
        return 0;
     }
    
    for(int i=0;i<length;i++)
    { int c1=0; int c2=0;
         for(int j=0;j<length;j++)
    {
        if(str[i]==str[j])
        c1++;
        if(str[i]==str1[j])
        c2++;
            
        }
    if(c1!=c2)
    {
        printf("not anagram ");
        return 0;
    }}
    
    printf("anagram string");
return 0;
}
