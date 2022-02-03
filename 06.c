#include <stdio.h>
// 2/18 시험범위인 모두의 C언어 정리하기
// 6단원 - loop

int main(void) { 

    for (int x = 0; x < 10; x++){ //for(값; 조건; 루프마다 가감승제?)
      printf("어쩔티비 \n 저쩔티비");
    }

    for (int y= 10; y > 0; y--){ 
      printf("응애님\n");
    }

    for (int i = 0; i < 10; i++){
      for (int j = 0; j < 10; j++){
        printf("조시녕 ");
      }
      printf("\n");
    }

    int asdf = 0;
    while(asdf != 5) { //while(조건식), 0이외의 수는 무한루프
    printf("cat\n");
    asdf = 5;
    } 

    asdf = 0;

    // do - while문은 일단 do에서 한번 실행 후 조건식을 판별함.

    // do { 
    //     todo;
    // } while(case);
    // printf("루프 끝");

    do { 
        printf("shinyoung\n");
        asdf++;
    } while(asdf < 5);
    printf("babu\n");

    for (int x = 0; x < 10; x++){ // break 
      if (x == 5)break;
      printf("어쩔티비 \n 저쩔티비");
    }

    for (int y = 0; y < 10; y++){ // continue - 조건 충족 시 변수 계산 후 처음으로
      if(y==3)continue; // 3으로 조건 충족 - line 50 무시하고 y++ 실행 후 루프.
      printf("%d",y);
    }

    
    





}
