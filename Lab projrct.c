#include<stdio.h>
int main()
{
    char *foodname[6]={"Burger","Pizza" ,"Fried Rice" ,"Fried Chicken","Coffee","Tea"};
    int price[6]={150,300,180,350,80,10};
    printf("Welcome to Yk's Resturent \n");
    printf("Menu:\n");
    int i,j,choice,quantity,bkash;
    int total=0;
  printf(" 1.Burger 150tk\n 2.Pizza 300tk\n 3.Fried Rice 180tk\n 4.Fried Chicken 350tk\n 5.Coffee 80tk\n 6.Tea 10tk\n");
while(1)
    {
      printf("Enter item number 1-6:");
      scanf("%d",&choice);
      if(choice==0)
        break;
      if(choice>=1 && choice<=6){
        printf("Enter Quantity %s:",foodname[choice-1]);
        scanf("%d",&quantity);
      total=total+price[choice-1]*quantity;
      }
      else
        printf("Invalid");

    }
  printf("Total Bill :%d\n",total);
  printf("What kind of mathoad do you use(1 for Bkash and 2 for Cash):");
  scanf("%d",&bkash);
  if(bkash==1)
    printf("scan the QR coad");
  else
    printf("Give me cash");
    return 0;

}
