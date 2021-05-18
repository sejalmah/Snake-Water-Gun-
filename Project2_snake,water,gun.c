#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Project 2
//Snake,water,gun 
int snakewatergun(char you,char comp) {
//return 1 if you win , -1 if you lose and 0 if draw.
 if (you==comp) {
return 0;
}
else if (you=='s' && comp=='w') {
return 1;
}

else if (you=='s' && comp=='g') {
return -1;
}
else if (you=='w' && comp=='g') {
return 1;
}
else if (you=='w' && comp=='s') {
return -1;
}
else if (you=='g' && comp=='w') {
return -1;
}

else if (you=='g' && comp=='s') {
return 1;
}
else { printf("Invalid choice\n");}

}
int main()
{
char you,comp;
int number;
//generating random number
srand(time(0));
number=rand()%100+1;
if (number<33) {comp='s'; }
else if (number>33 && number<66) { comp='w';}
else { comp='g'; } 
printf("Enter 's' for snake 'w' for water   'g' for gun.\n");
scanf("%c",&you);
int result=snakewatergun(you,comp);
printf("You choose %c and computer choose %c.\n",you,comp);
 
printf("Your score is %d.\n",result);
if (result==0) {
printf("Match draw!\n");
}
if (result==1) {
printf("You win!\n");
}
if (result==-1) {
printf("You lose!\n");
}
printf("Score Board:\n 1 means You win\n-1 means You lose\n 0 means Match draw\n");
    return 0;
}