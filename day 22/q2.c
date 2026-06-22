# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;int c=0;
    printf("enter a sentence");
   fgets(str,100,stdin);
   
    for(int i=0;str[i]!='\0';i++)
    {
      if((i==0 && str[i]!=' ' && str[i]!='\n') ||( str[i]!=' '&&str[i-1]==' '))
      c++;
    }
    
    printf("no of words=%d",c);
 
return 0;
}


