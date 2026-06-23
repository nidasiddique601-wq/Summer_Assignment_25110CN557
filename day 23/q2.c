# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;int c=0;
    printf("enter a word");
   fgets(str,100,stdin);
   
     while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }
    printf("first repeating character is \n");
    for(int i=0;i<length;i++)
    {c=0;
         for(int j=0;j<length;j++)
    {
        if(str[i]==str[j])
        c++;
            
        }
    if(c>1)
    {
        printf("%c",str[i]);
        break;

    }
    }
       
 
return 0;
}
