#include <stdio.h>
#include <stdlib.h>

int main(void) { 

    //동적 메모리 할당, 그리고 malloc()

    int *a; // int 포인터 변수 선언
    a = malloc(4); // a에게 메모리 4바이트를 부여
    *a  =  100; // a의 주소값 위치에 100을 넣기

    printf("메모리 주소 - %d\n", a); 
    printf("메모리 4바이트 속의 값 =  %d\n", *a);

    free(a); // 메모리 반환

    // 왜 우리는 동적 메모리 할당을 사용해야만 할까?
    // 10 - 1 코드로 넘어가보자.


}
