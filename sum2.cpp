#include <stdio.h>
int sum(int, int);
int main() 
{
  int su1, su2, s;
  printf("�� ���� �Է��ϼ��� : ");
  scanf("%d %d", &su1, &su2);	
  s = sum(su1, su2);
  printf("�� ���� ���� %d�Դϴ�.\n", s);	
  return 0; 
}
int sum(int su1, int su2) 
{
  int result;
  result = su1 + su2;
  return result;
}	
