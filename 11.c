#include <stdio.h>
#include <stdlib.h>

  // 구조체란 ?
  // 간단히 요약하자면, 구조체는 변수의 집합체라고 볼 수 있다.
  // 참고로 구조체는 문자열 초기화 시 string.h에 포함된 strcpy를 사용해야 한다!

  // 구조체 선언 예시 1 - 
  struct myprofile{
    int height;
    int weight;
    
  };

  struct myprofile a; // 구조체 변수 선언. 

  //구조체 선언 예시 2 - 
  struct timeline{
    int year;
    int month;
    int day;
  } b; // 구조체 변수 B 선언.

int main(void) { 
  struct myprofile me;
  me.height = 167;
  me.weight = 70;
  
  printf("%d , %d\n",me.height, me.weight);

  struct timeline today;
  struct timeline nextday;
  today.year = 2022;
  today.month = 2;
  today.day = 3;

  printf("오늘은 %d년 - %d월 - %d일\n",today.year, today.month, today.day);

  nextday = today; // 구조체도 일반 변수처럼 복사가 가능하다!
  nextday.day += 1;

  printf("내일은 %d년 - %d월 - %d일\n",nextday.year, nextday.month, nextday.day);


  // 포인터 구조체
  struct timeline *point; // 구조체 timeline을 가지는 포인터 변수 d 선언
  point = &today; // point의 포인터에다 today의 주소값을 저장

  today.year = 2023; // 구조체 변수 today의 year 변수에 접근
  point -> year = 2006; // 포인터 변수를 참조 연산자 -> 를 통해 접근하기
  (*point).year = 5; // 구조체 포인터 변수를 역참조 연산자를 통해 설정






}
