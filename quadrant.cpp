#include<stdio.h>
#include<math.h>
int quadrant(int x, int y){
	if(x>0 && y>0) return 1;//(+,+)
	else if(x<0 && y>0) return 2;//(-,+)
	else if(x<0 && y<0) return 3;//(-,-)
	else if(x>0 && y<0) return 4;//(+,-)
	else return 0;
	
}
int distance(int x, int y){
	return sqrt(pow(x,2) + pow(y,2));
}

int main()
{
	int x,y;
	int quad, dis;
	printf("������ ��ǥ�� �Է��ϼ���:");
	scanf("%d %d", &x,&y);
	quad=quadrant(x,y);
	dis =distance(x,y);
	printf("��и� :%d\n", quad);
	printf("�������� �Ÿ�:%d\n",dis);
	return 0;
}
