# include<stdio.h>
int main()
{
   float balance;
   float amount;
   int choice;
   printf("enter amount balance");
   scanf("%f",&balance);
   printf("------------ATM MENU--------------\n");
   printf("1. Display Balance\n");
   printf("2. Deposit Amount\n");
   printf("3. Withdraw Amount\n");
   printf("4. EXIT \n");
   printf("enter your choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
      printf("CURRENT BALANCE=\tRs.%.2f\n",balance);
      break;
      case 2:
      printf("CURRENT BALANCE=\tRs.%.2f\n",balance);
      printf("enter amount to be deposited:\n");
      scanf("%f",&amount);
      printf("AMOUNT DEPOSITED\n");
      balance+=amount;
      printf("CURRENT BALANCE AFTER DEPOSITION=\t%.2f\n",balance);
      break;
      case 3:
      printf("CURRENT BALANCE=\tRs.%.2f\n",balance);
      printf("enter amount to be withdrawn:\n");
      scanf("%f",&amount);
      if(amount>balance)
      {
         printf("INSUFICIENT BALANCE\n");
      }
      else{
      balance-=amount;
      printf("AMOUNT WITHDRAWN");}
      printf("CURRENT BALANCE AFTER WITHDRAWING AMOUNT=\t%.2f\n",balance);
      break;
      case 4:
      printf("THANK YOU FOR USING OUR ATM\n");
      default:
      printf("invalid choice");
      break;

   }

   return 0;
}


