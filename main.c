#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

int usrScore=0,comScore=0;

void CheckWin(int usr,int com)
{
//1 rock,2 paper,3 scissor
if(usr==com)
{
        printf("\n\t\t\t\t\t------------\n");
        printf("\n\n\t\t\t\t\tIts a tie\n\n");
        printf("\n\t\t\t\t\t------------\n");
}
else if(usr==1)
    {
        if(com==2){
            printf("\n\t\t\t\t\t------------\n");
            printf("\n\t\t\t\t\tComputer win\n");
             comScore++;
             printf("\n\t\t\t\t\t------------\n");
        }
        else{
            printf("\n\t\t\t\t\t------------\n");
            printf("\n\t\t\t\t\tUser win");
            printf("\n\t\t\t\t\t------------\n");
            usrScore++;
            }
    }
else if(usr==2)
    {

        if(com==1){
        printf("\n\t\t\t\t\t------------\n");
        printf("\n\t\t\t\t\tUser win");
        usrScore++;
        printf("\n\t\t\t\t\t------------\n");
        }
        else{
            printf("\n\t\t\t\t\t------------\n");
            printf("\n\t\t\t\t\tComputer win");
            comScore++;
            printf("\n\t\t\t\t\t------------\n");
            }
    }
else if(usr==3)
    {

        if(com==1){
        printf("\n\t\t\t\t\t------------\n");
        printf("\n\t\t\t\t\tComputer win");
        comScore++;
        printf("\n\t\t\t\t\t------------\n");
        }
        else{
            printf("\n\t\t\t\t\t------------\n");
            printf("\n\t\t\t\t\tUser win");
            usrScore++;
            printf("\n\t\t\t\t\t------------\n");
            }
    }

else if(usr==4)
        {

           if(usrScore>comScore)
            {
            Beep(1500,550);
            printf("\n\t\t\t\t\t------------***------------\n");
            printf("\t\t\t\t\t------------***------------\n");
            printf("\t\t\t\t\tScore is %d",usrScore);
            printf("\n\t\t\t\t\t------------***------------\n");
            printf("\n\t\t\t\t\t*****Winner is User*****\n");
            printf("\n\t\t\t\t\t------------***------------\n");
            }
           else if(usrScore<comScore)
            {
            Beep(1500,550);
            printf("\n\t\t\t\t\t------------***------------\n");
            printf("\t\t\t\t\tScore is %d",comScore);
            printf("\n\t\t\t\t\t------------\n");
            printf("\n\t\t\t\t\t*****Winner is Computer*****\n");
            printf("\n\t\t\t\t\t------------***------------\n");
            }

           else{
            Beep(1200,550);
           Beep(1200,550);
            printf("\n\t\t\t\t\t------------***------------\n");
            printf("\t\t\t\t\t------------***------------\n");
            printf("\t\t\t\t\tScore is %d %d",usrScore,comScore);
            printf("\n\t\t\t\t\t------------\n");
            printf("\t\t\t\t\tGame is draw");
            printf("\n\t\t\t\t\t-----------***------------\n");
            }
            printf("\t\t\t\t\t------------***------------\n");
            printf("\n\t\t\t\t\tThanks for playing\n");
            printf("\n\t\t\t\t\t------------***------------\n");

         }
     else
        {
    printf("\n\nInvalid option!!!\n\n");
    Beep(750,500);
        }

}



int main()
{
system("Color B0");
    int userchoice,compchoice;
    char ch='y';
    srand(time(0));

    printf("\n\n\n\t\t\t\t\t--------***Console Application***----------------\n\n\n\n");
    printf("\t\t\t\t\t-----------Welcome to Roshambo Game------------\n");
    printf("\n\t\t\t\t\t----Roshambo means Rock paper scissor game----\n\n");
    printf("\n\t\t\t\t\tPlease select the option");


    while(userchoice!=4)
    {
    printf("\n\t\t\t\t\t1.Rock\n\t\t\t\t\t2.Paper\n\t\t\t\t\t3.Scissor\n\t\t\t\t\t4.Quit\n\n");

    printf("\n\t\t\t\t\tUser option: ");
    scanf("%d",&userchoice);
    compchoice=(rand()%3)+1;
    if(userchoice!=4){
    printf("\t\t\t\t\tComputer option: %d",compchoice);
    }
    CheckWin(userchoice,compchoice);
    }
    scanf("%c",&ch);
    if(ch =='y'){
        printf("Thanks for playing");
    }
    return 0;
}

