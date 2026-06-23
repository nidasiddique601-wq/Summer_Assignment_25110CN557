# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];int freq[100];
    int c=0;
    printf("enter a word");
   fgets(str,100,stdin);
   int length=strlen(str);
   for(int i=0;i<length;i++)
   { c=0;
     for(int j=0;j<length;j++)
    {
        if(str[i]==str[j])
        c++;
    }
    freq[i]=c;
   }
    int max=freq[0];int j;
    for(int i=1;i<length;i++)
    {
        if(freq[i]>max)
       {max=freq[i];
        j=i;}
    }
    printf("the character with maximum frequency=%c\n ",str[j]);
    printf("with frequency=%d",max);
     return 0;
}

