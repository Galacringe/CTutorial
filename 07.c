#include <stdio.h>

int main(void) { 
    
  int a,b,c;
  a=1;b=2;c=3;

  int ary[3];
  ary[0] = a;
  ary[1] = b;
  ary[2] = c;

  int aary[3] = {a, b, c};


  int empty_idx_ary[] = {1, 2, 3, 4, 5, 6};
  //빈 배열의 길이는 이후의 값에 따라서 지정됨

  printf("%d byte",sizeof(empty_idx_ary));
  // 값은 24, int의 크기는 4b * 6 = 24b

  // 배열 ary = [1][2][3]

  int twod[2][3];

  //  idx 0 1 2 
  //  0  [][][]
  //  1  [][][]

  // 2차원 배열 초기화하기 1. 그냥 쭉
  int x[2][3] = {1, 2, 3, 4, 5, 6};
  // 2. 행과 열대로 작성 - 마지막은 , 없음
  int y[2][3] = {

    {1, 2},
    {3, 4}

                };

  // 선언 이후에는 무조건 초기화 시 상수 필요함
  
  // 배열 복사는 반드시 요소 하나하나 for문으로 접근 필요
  int t[5] = {1,2,3,4,5};
  int u[5];

  for(int i = 0; i < 5; i++){
    u[i] = t[i]; // 하나씩 복사 후 출력
  }  

  // 문자열 배열
  char s1[6] = {'S', 'a', 'n', 's', ' ', 'c'};
  char s2[6] = "Sans c";
  char s3[] = {'S', 'a', 'n', 's', ' ', 'c'};
  char s4[] = "Sans c";
  
  // 넷 다 [S][a][n][s][ ][c][\0] 으로 저장됨









}
