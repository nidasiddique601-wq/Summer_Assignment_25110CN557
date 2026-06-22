# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;
    printf("enter a string in lowercase");
    fgets(str,100,stdin);
    while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a'&& str[i]<='z')
        
        {str[i]=str[i]-32;}
        i++;

    }
    printf("string in uppercase=\t ");
       puts(str);


return 0;
}
