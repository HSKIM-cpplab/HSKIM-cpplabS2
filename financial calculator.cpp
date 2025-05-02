#include <stdio.h>
#include<math.h>

int main(void){

  printf("현재 가치(PV르
  main_choice();
}

int main_choice(void){
  int choice = 0;
  printf("1.현재가치(PV) \n 2.미래가치(FV) \n 3.이자율");
  scan_f("%d",&choice);
  return choice;

  if (choice == 1){
    PV_joah();
}

else if (choice == 2) {
  FV_joah();
}

else if (choice == 3){
   I_Y_joah();
}

else {
  printf("잘못된 선택");
  return 0;
}

  return choice;
}

int PV_joah(int FV, int r



