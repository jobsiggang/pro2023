/*�Ž����� ����ϱ�*/ 
#include<stdio.h>
int main(){
int dodo, gogo;//�ǶǸ�� �ǲǹ� ������ ������ ���� ���� 
int total,deposit, change, rest;// �� ���Աݾװ� �ܵ�
int w500, w100,w50,w10;// �� �ݾ״��� ������ ������ ������ ����
int cnt_dodo, cnt_gogo;//�ǶǸ�� �ǲǹ� ������ �Է¹��� ���� ���� 
printf("�ǶǸ�70�� �ǲǹ� 30�� �Դϴ�. ������ ������ �� �Է��Ͻÿ�."); 
scanf("%d %d",&cnt_dodo,&cnt_gogo);// ���� �Է� �ޱ� 
dodo = 70*cnt_dodo; // �ǶǸ� ���԰��� ���
gogo = 30 *cnt_gogo; // �ǲǹ� ���԰��� ���
total =dodo +gogo; // ��ü ���� �Ѿ� ��� 
printf("�����ؾ��� �ݾ��� %d���Դϴ�. ������ �ݾ��� �Է��Ͻÿ�.",total);
scanf("%d",&deposit) ;
if( deposit>total)	{
	change =deposit - total;  // �Ž����� ��� 
	w500 = change /500;// �� �����ڸ� ����Ͽ� 500�� ������ ���� ���
	rest = change % 500;// 500���� �Ž����ְ� ������ ���� ��� 
	w100 = rest / 100; //���� �ܵ����� 100�� ������ ���� ��� 
	rest = rest % 100;// 100���� �Ž����ְ� ���� �ܵ��� �ӽ� ���� 
	w50 = rest /50;
	rest = rest % 50;
	w10 =rest /10;
	printf("�ǶǸ� ��ü �ݾ� : %d\n",dodo); 
	printf("�ǲǹ� ��ü �ݾ� : %d\n",gogo);
	printf("�Ž����� : %d\n",change);
	printf("�Ž����� ������ �ּ� ����.....\n");
	printf("500:%d��,100:%d��,50:%d��,10:%d��\n", w500, w100, w50, w10);
}
else 
    printf("�ݾ��� �����մϴ�. �ȳ��� ������^^"); 
return 0; 
}

