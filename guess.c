#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
 int guess, number, nguesses=1;
 //int rand;
 srand(time(0));
 number=rand()%100+1;
//printf("generated number is %d\n");
do{
printf("write the number you have guessed\n");
scanf("%d" ,&guess);

if(guess>number){
  printf("lower number please!\n");}
  
  else
   if (guess<number){
    printf("higher number please!\n");
  }
  else{
    printf("you guess it in  %d attempts\n" ,nguesses);}
    nguesses++;
  }
  while(guess!=number);
  
  return 0;
}







