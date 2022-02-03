#include <stdio.h>


int main(void) { 
  
  int a = 1 , b = 2;
  if (a>b) {
    printf("A");
  
  }
  else if (a<b){
    printf("B");
  }

  switch (a+b){ //switch ( 수식/변수 )
    case(1){
      printf('1');
    }
    case(2){
      printf('2');
    }
    default:
      printf('3');
  }
  
}
