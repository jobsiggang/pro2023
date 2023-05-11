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
	printf("한점의 좌표를 입력하세요:");
	scanf("%d %d", &x,&y);
	quad=quadrant(x,y);
	dis =distance(x,y);
	printf("사분면 :%d\n", quad);
	printf("원점까지 거리:%d\n",dis);
	return 0;
}
