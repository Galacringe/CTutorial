#include <stdio.h>
#include <stdlib.h>

char* Name(void); // 함수의 return이 곧 char형 변수의 주소값

int main(void) { 

  char* name1;
  char* name2;
  
  name1 = Name();
  name2 = Name();

  printf("%s\n",name1);
  printf("%s\n",name2);

  free(name1);
  free(name2);
}

char* Name(void)
{
  char *name = (char*)malloc(sizeof(char)*15);

  printf("Name:");
  gets(name);

  return name;
}

