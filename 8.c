#include <stdio.h>

int main(void) { 
  // 아 포인터

  // 포인터는 변수의 주소, 그러니까 변수가 위치한 곳을 변수로 만든 것.
  
  int a = 10;
  //위치는 &a

  int *b = &a;
  //포인터 b를 선언 및 초기화.

  *b = 15;
   printf("%d", a);

  // 15가 출력되는 이유 - *b = 15; 를 통해서 주소에 위치한 값을 15로 변경해서

  
  int *i;
  double *d;
  char *c;
  // i,d,c 의 sizeof() 값은 모두 같다.
  // 변수의 크기가 얼마나 되든, 결국에는 주소의 길이는 4byte.

  // 왜 포인터를 쓰는가?
  // 함수와 같은 곳에서 main의 변수를( 즉 지역 변수 )를 참조해도, 원본값을 수정하는것은 불가능
  // 그래서 우리는 return 값을 통해서 수정해왔음
  // 하지만 직접 주소값을 주는 것이기에, 직접적인 수정이 가능해짐

  int ary[3] = {1,2,3};
  
  // &ary[0] = ary의 주소값
  printf("%d\n",&ary[0]);
  printf("%d\n",ary);

  //즉, 이 둘도 같음
  int *zeroidx = &ary[0];
  int *aryidx = a;

  // 포인터 주소의 연산
  
  int *point;
  point = ary;
  point = point + 1;
  printf("ary[1]의 주소 = %d\n", &ary[1]);
  printf("포인터 point+1의 주소 = %d\n", point);

  //다만, 문자형 배열일 경우 '' = 1바이트임



}
