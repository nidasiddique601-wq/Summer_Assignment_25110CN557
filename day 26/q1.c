# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int main()
{
   int attempt=0; 
   srand(time(0));
   int secret=rand()%100+1;
   int guess;
   
      printf("guess a number between 1- 100\n");
   do{
      printf("enter your guess\n");
      scanf("%d",&guess);
   attempt++;
   
      if(guess>secret)
     { printf("guess is higher\n");}
      else if(guess<secret)
      {
         printf("guess is lower\n");
      }
      else
      {
         printf("correct !! you guessed it in = %d attempts",attempt);
      }
   } 
   while (guess!=secret);
   
   return 0;
}
