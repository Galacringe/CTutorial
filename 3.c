#include <stdio.h>

void func10(int x); // 함수 선언
int sum(int x, int y);

int main(void) { 
  
  func10(1);

  int x = sum(1, 3);
  printf("%d", x);
  return 0;
}

void func10(int x) // void 함수명(input) - return 값이 존재하지 않음
{
  x =  x * 10;
  printf("값은 %d입니다\n", x);
}

int sum(int x, int y){ // return형 함수명(input) 
  return x + y;
}

// https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=dd1587&logNo=221106199316