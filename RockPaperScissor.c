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
        printf("\n------------\n");
        printf("Its a tie");
        printf("\n------------\n");
}
else if(usr==1)
    {
        if(com==2){
            printf("\n------------\n");
            printf("Computer win");
            comScore++;
             printf("\n------------\n");
        }
        else{
            printf("\n------------\n");
            printf("User win");
            printf("\n------------\n");
            usrScore++;
            }
    }
else if(usr==2)
    {

        if(com==1){
        printf("\n------------\n");
        printf("User win");
        usrScore++;
        printf("\n------------\n");
        }
        else{
            printf("\n------------\n");
            printf("Computer win");
            comScore++;
            printf("\n------------\n");
            }
    }
else if(usr==3)
    {

        if(com==1){
        printf("\n------------\n");
        printf("Computer win");
        comScore++;
        printf("\n------------\n");
        }
        else{
            printf("\n------------\n");
            printf("User win");
            usrScore++;
            printf("\n------------\n");
            }
    }

else if(usr==4)
        {

           if(usrScore>comScore)
            {
            printf("\n------------***------------\n");
            printf("------------***------------\n");
            printf("Score is %d",usrScore);
            printf("\n------------***------------\n");
            printf("\n*****Winner is User*****\n");
            printf("\n------------***------------\n");
            }
           else if(usrScore<comScore)
            {
            printf("\n------------***------------\n");
            printf("Score is %d",comScore);
            printf("\n------------\n");
            printf("\n*****Winner is Computer*****\n");
            printf("\n------------***------------\n");
            }

           else{
            printf("\n------------***------------\n");
            printf("------------***------------\n");
            printf("Score is %d %d",usrScore,comScore);
            printf("\n------------\n");
            printf("Game is draw");
            printf("\n------------***------------\n");
            }
            printf("------------***------------\n");
            printf("\nThanks for playing\n");
            printf("\n------------***------------\n");

         }
     else
        {
    printf("\n\nInvalid option!!!\n\n");
    Beep(750,500);
        }

}



int main()
{
system("Color F0");
    int userchoice,compchoice;

    srand(time(0));

    printf("--------***Console Application***----------------\n\n");
    printf("-----------Welcome to Roshambo Game------------\n");
    printf("\n----Roshambo means Rock paper scissor game----\n\n");
    printf("\nPlease select the option");


    while(userchoice!=4)
    {
    printf("\n1.Rock\n2.Paper\n3.Scissor\n4.Quit\n\n");

    printf("\nUser option: ");
    scanf("%d",&userchoice);
    compchoice=(rand()%3)+1;
    if(userchoice!=4){
    printf("Computer option: %d",compchoice);
    }
    CheckWin(userchoice,compchoice);
    }
    return 0;
}

