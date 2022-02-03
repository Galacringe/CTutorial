#include <stdio.h>


int main(void) { 
  int a, b = 1;
  
  a++;
  ++b;

  a--;
  --b;

  // ++x / ++x 의 차이점은 계산 후 수행인지, 수행 후 계산인지 
  printf("%d\n", a+b);
  printf("%d\n", a-b);
  printf("%d\n", a*b);
  printf("%d\n", a/b);
  printf("%d\n", a%b); //나머지 연산자 %

  // == , != , > , < , >= , <=
  // 논리 연산자 '&&' and, '||' or, '!' not
  //
  a = 11;

  b = a > 10 ? 2 : 1;
  // = if a > 10 = True => 2
  // else if a > 10 = False => 1
  // 조건 연산자 - A ? B : C
  // if A True -> B
  // if A False -> C


  // https://reakwon.tistory.com/65 비트 연산자 

}
