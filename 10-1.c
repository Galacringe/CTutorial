#include <stdio.h>
#include <stdlib.h>

char* Name(void); // 함수의 return이 곧 char형 변수의 주소값

int main(void) { 
  
  char *name1;
  char *name2;

  name1 = Name();
  name2 = Name();

  printf("Hi %s\n", name1);
  printf("Hi %s\n", name2);

}

char* Name(void){
  char name[15]; // 지역 변수 
  printf("What's your Name? - ");
  gets(name); // 문자열 입력, 함수로 받은 문자를 배열에 저장함.

  return name;
}

// 정상적으로 동작하지 않고, 쓰레기 값 내지는 중복된 값이 나온다.
// 전역 변수를 사용해도 똑같다. 한번 선언된 곳을 중복해 사용하기 때문.
// 고로 첫번째 값은 두번째 값에 의해 덮어씌워진다.
// 그럼 이제 동적 메모리 할당으로 이를 해결해보자. 10-2로.

