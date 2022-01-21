#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int List();
void Deposite();
void Last();
void Transfer();
void Withdrawn();
void CheckDetails();
int TotalAmount=1000,DAmount,WAmount,TAmount;
int TotalDeposite=0,TotalWithdrawn=0,TotalTransfer=0;
int Account;
char a[50];
int main()
{
    system("cls");
    printf("\nEnter Your Name=");
    gets(a);
    printf("\nEnter Your Account Number=");
    scanf("%d",&Account);
    while(1)
    {
      system("cls");
        switch(List())
        {
        case 1:
            Deposite();
            TotalDeposite+=DAmount;
            break;
        case 2:
            Withdrawn();
            if(WAmount<=TotalAmount)
                TotalWithdrawn+=WAmount;
            break;
        case 3:
            Transfer();
            if(TAmount<=TotalAmount)
            TotalTransfer+=TAmount;
            break;
        case 4:
            CheckDetails();
            break;
        case 5:
            system("cls");
            Last();
            getch();
            exit(0);
        default:
            printf("\nInvalid Choice");
        }
        getch();
    }
    return 0;
}
int List()
{
    int ch;
    printf("\n1. Deposite Amount");
    printf("\n2. Withdrown Amount");
    printf("\n3. Transfer Amount");
    printf("\n4. Check Details");
    printf("\n5. EXIT");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    return ch;
}
void Deposite()
{
    printf("\nPlease Enter amount you want to deposite");
    scanf("%d",&DAmount);
    TotalAmount+=DAmount;
}
void Withdrawn()
{
    printf("\nPlease Enter amount you want to withdrawn");
    scanf("%d",&WAmount);
    if(WAmount<=TotalAmount)
        TotalAmount=TotalAmount-WAmount;
    else
        printf("\nLess amount in your account Therefore withdrawn is not possible");
}
void Transfer()
{
    printf("\nPlease enter amount you want to transfer");
    scanf("%d",&TAmount);
    if(TAmount<=TotalAmount)
        TotalAmount=TotalAmount-TAmount;
    else
        printf("\nLess amount in your account Therefore transfer is not possible");
}
void CheckDetails()
{
    printf("\nTotal Amount=%d",TotalAmount);
    printf("\nTotal Deposite Amount=%d",TotalDeposite);
    printf("\nTotal Withdrawn Amount=%d",TotalWithdrawn);
    printf("\nTotal Transfer Amount=%d",TotalTransfer);
}
void Last()
{
    printf("\n-----------------------------\n");
    printf("\nYour Name=%s",a);
    printf("\nYour Account Number=%d",Account);
    printf("\nTotal Amount=%d",TotalAmount);
    printf("\nTotal Deposite Amount=%d",TotalDeposite);
    printf("\nTotal Withdrawn Amount=%d",TotalWithdrawn);
    printf("\nTotal Transfer Amount=%d",TotalTransfer);
    printf("\n------------THANKS-------------\n");
}
