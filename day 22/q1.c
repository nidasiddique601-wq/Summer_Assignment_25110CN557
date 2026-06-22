# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;
    printf("enter a string in lowercase");
   scanf("%s",str);
   while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }

    char rev[100];int j=0;
    for(int i=length-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    if(strcmp(str,rev)==0)
    printf("palindrome string");
    else
    printf("not palindrome string");
 
return 0;
}

