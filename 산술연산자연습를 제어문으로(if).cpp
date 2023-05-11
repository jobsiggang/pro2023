/*거스름돈 계산하기*/ 
#include<stdio.h>
int main(){
int dodo, gogo;//또또면과 꽁꽁바 가격을 저장할 변수 선언 
int total,deposit, change, rest;// 총 구입금액과 잔돈
int w500, w100,w50,w10;// 각 금액단위 동전의 개수를 저장할 변수
int cnt_dodo, cnt_gogo;//또또면과 꽁꽁바 개수를 입력받을 변수 선언 
printf("또또면70원 꽁꽁바 30원 입니다. 각각의 개수를 띄어서 입력하시오."); 
scanf("%d %d",&cnt_dodo,&cnt_gogo);// 개수 입력 받기 
dodo = 70*cnt_dodo; // 또또면 구입가격 계산
gogo = 30 *cnt_gogo; // 꽁꽁바 구입가격 계산
total =dodo +gogo; // 전체 구입 총액 계산 
printf("지불해야할 금액은 %d원입니다. 투입할 금액을 입력하시오.",total);
scanf("%d",&deposit) ;
if( deposit>total)	{
	change =deposit - total;  // 거스름돈 계산 
	w500 = change /500;// 몫 연산자를 사용하여 500원 동전의 개수 계산
	rest = change % 500;// 500원을 거슬러주고 동전의 개수 계산 
	w100 = rest / 100; //남은 잔돈에서 100원 동전의 개수 계산 
	rest = rest % 100;// 100원을 거슬러주고 남은 잔돈을 임시 보관 
	w50 = rest /50;
	rest = rest % 50;
	w10 =rest /10;
	printf("또또면 전체 금액 : %d\n",dodo); 
	printf("꽁꽁바 전체 금액 : %d\n",gogo);
	printf("거스름돈 : %d\n",change);
	printf("거스름돈 동전의 최소 개수.....\n");
	printf("500:%d개,100:%d개,50:%d개,10:%d개\n", w500, w100, w50, w10);
}
else 
    printf("금액이 부족합니다. 안녕히 가세요^^"); 
return 0; 
}

