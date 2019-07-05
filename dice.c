#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 6

int main(){
  int diceA,diceB;
  printf("Rolling the dice...\n");
  srand((unsigned)time(NULL));
  
  diceA = rand()%MAX+1;
  printf("Die 1: %d\n",diceA);
  
  diceB = rand()%MAX+1;
  printf("Die 2: %d\n",diceB);

  printf("Total value: %d\n",diceA+diceB);

  if(diceA+diceB>7)
    printf("You won.\n");
  else
    printf("You lost.\n");
  return 0;
}
