#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
int main()
{
    /*Money=1,2,5,10,20,50,100,200,500,2000*/
   int pin,withdraw,deposit,Money,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10;
   int w1,ws1,wm1,w2,ws2,wm2,w3,ws3,wm3,w4,ws4,wm4,w5,ws5,wm5;
   int switch1,switch2,switch_1,switch_2,switch_3,switch_4;
   m1=1;
   m2=2;
   m3=5;
   m4=10;
   m5=20;
   m6=50;
   m7=100;
   m8=200;
   m9=500;
   m10=2000;
   Money=5000;



while(1){
         printf("----------------Welcome To ATM-----------------\n");


   printf("\n\nEnter Your Pin:");
   scanf("%d",&pin);
   system("cls");

   if(pin==2020){
    printf("----------------Welcome To ATM-----------------\n");

     break;
   }else{
   printf(" \n Your A.T.M Pin Is Wrong Try Again\n\n");
   }
}
    while(1){


        printf("\n\n 1. Check Your Balance.\n");
		printf(" 2. Withdraw Your Cash.\n");
		printf(" 3. Deposit Your Cash.\n");
		printf(" 4. Quit ATM.\n");
		printf("________________________________________________________________________________________________");

printf("\n\n Press Number To Continue:");
scanf("%d",&switch1);
switch(switch1){

case 1:

    system("cls");
    printf("\n\nYour Current Balance: %d Rupees\n\n",Money);
    break;
    case 3:
    printf("yeahhh");
    break;
     return 0;


case 4:
    system("cls");
    printf("\n\n...Thank You For Using ATM...\n\n");
    break;
      return 0;
      default:
        system("cls");
    printf("\nYour Number Is Not Listed..Try Again\n");
    return 0;
    break;




case 2:

     system("cls");
     printf("\n\nEnter a Money You Want to Withdraw:");
     scanf("%d",&withdraw);
    ws1=Money-withdraw;
     system("cls");
     printf("\n\nYour Current Balance:%d \n\n",ws1);

     printf("\n\nWant to withdraw more ?\n\n");
      printf("Yes = 1\n No = 2");
     printf("\n\n---------------------------------------------\n\n");
     printf("Press Number To Choice:");
     scanf("%d",&w1);




     switch(w1)
     {


     case 1:
          system("cls");
     printf("\n\nEnter a Money You Want to Withdraw:");
     scanf("%d",&wm1);
    ws2=ws1-wm1;
     system("cls");
     printf("\n\nYour Current Balanceeee:%d \n\n",ws2);
     printf("\n\nWant to withdraw more ?\n\n");
    printf("Yes = 1\n No = 2");
     printf("\n\n---------------------------------------------\n\n");

     break;
     case 2:

    switch(switch_4){case 1:
    system("cls");
    printf("\n\nYour Current Balance: %d Rupees\n\n",ws1);
    break;
    return 0;

case 3:
    printf("yeahhh");
     return 0;

case 4:
    system("cls");
    printf("\n\n...Thank You For Using ATM...\n\n");
      return 0;
    default:
        system("cls");
    printf("\nYour Number Is Not Listed..Try Again\n");
     return 0;
    break;}

default:
        system("cls");
    printf("\nYour Number Is Not Listed.\n");
  return 0;
    break;}
      printf("Press Number To Choice:");
     scanf("%d",&w2);
     system("cls");


     switch(w2)
     { case 1:
          system("cls");
     printf("\n\nEnter a Money You Want to Withdraw:");
     scanf("%d",&wm2);
    ws3=ws2-wm2;
     system("cls");
     printf("\n\nYour Current Balance:%d \n\n",ws3);
     printf("\n\nWant to withdraw more ?\n\n");
     printf("Yes = 1\n No = 2");
     printf("\n\n---------------------------------------------\n\n");

     break;
     case 2:

        printf("\n\n 1. Check Your Balance.\n");

		printf(" 3. Deposit Your Cash.\n");
		printf(" 4. Quit ATM.\n");
		printf("________________________________________________________________________________________________");

printf("\n\n Press Number To Continue:");
scanf("%d",&switch_1);
switch(switch_1){case 1:
    system("cls");
    printf("\n\nYour Current Balance:2 %d Rupees\n\n",ws2);
     return 0;
    break;

case 3:
    printf("yeahhh");
     return 0;

case 4:
    system("cls");
    printf("\n\n...Thank You For Using ATM...\n\n");
      return 0;
    default:
        system("cls");
    printf("\nYour Number Is Not Listed..Try Again\n");
     return 0;
    break;}
    default:
        system("cls");
    printf("\nYour Number Is Not Listed.\n");
  return 0;
    break;}
    printf("Press Number To Choice:");
     scanf("%d",&w3);
     system("cls");


     switch(w3){
     case 1:
         system("cls");
     printf("\n\nEnter a Money You Want to Withdraw:");
     scanf("%d",&wm3);
    ws4=ws3-wm3;
     system("cls");
     printf("\n\nYour Current Balance:%d \n\n",ws4);
     printf("\n\nWant to withdraw more ?\n\n");
     printf("Yes = 1\n No = 2");
     printf("\n\n---------------------------------------------\n\n");
     printf("Press Number To Choice:");
     scanf("%d",&w4);
     system("cls");
     break;
     case 2:
        printf("\n\n 1. Check Your Balance.\n");

		printf(" 3. Deposit Your Cash.\n");
		printf(" 4. Quit ATM.\n");
		printf("________________________________________________________________________________________________");

printf("\n\n Press Number To Continue:");
scanf("%d",&switch_2);
switch(switch_2){case 1:
    system("cls");
    printf("\n\nYour Current Balance:3 %d Rupees\n\n",ws3);
    break;
    return 0;

case 3:
    printf("yeahhh");
     return 0;

case 4:
    system("cls");
    printf("\n\n...Thank You For Using ATM...\n\n");
      return 0;
    default:
        system("cls");
    printf("\nYour Number Is Not Listed..Try Again\n");
     return 0;
    break;}

    default:
        system("cls");
    printf("\nYour Number Is Not Listed..Try Again\n");
     return 0;
    break;}
      printf("Press Number To Choice:");
     scanf("%d",&w4);
     system("cls");




     switch(w4){system("cls");
     case 1:
     printf("\n\nEnter a Money You Want to Withdraw:");
     scanf("%d",&wm4);
    ws5=ws4-wm4;
     printf("\n\n---------------------------------------------\n\n");
     system("cls");
     printf("\n\nYour Current Balance:%d \n\n",ws5);
     printf("\n\n---------------------------------------------\n\n");
     printf("\n\nIt's a Limit For Withdrawing Money.");


     printf("\n\n---------------------------------------------\n\n");
        printf("\n\n 1. Check Your Balance.\n");
		printf(" 3. Deposit Your Cash.\n");
		printf(" 4. Quit ATM.\n");
		printf("________________________________________________________________________________________________");


printf("\n\n Press Number To Continue:");
scanf("%d",&switch2);




switch(switch2){
case 1:
    system("cls");
    printf("\n\nYour Current Balance:1 %d Rupees\n\n",ws5);
    break;
    return 0;

case 3:
    printf("yeahhh");
    break;

case 4:
    system("cls");
    printf("\n\n...Thank You For Using ATM...\n\n");
    break;
      return 0;


default:
    system("cls");
    printf("\nYour Number Is Not Listed..Try Again\n");
    break;
     return 0;}
     break;


     }
     }
     printf("Thanks for using ATM");}
     return 0;}

