#include <stdio.h>
int sum(int, int);
int main() 
{
  int su1, su2, s;
  printf("두 수를 입력하세요 : ");
  scanf("%d %d", &su1, &su2);	
  s = sum(su1, su2);
  printf("두 수의 합은 %d입니다.\n", s);	
  return 0; 
}
int sum(int su1, int su2) 
{
  int result;
  result = su1 + su2;
  return result;
}	
