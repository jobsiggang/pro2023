#include <stdio.h>
#include <string.h>
int main(){
char str1[50]="apple";
char str2[50]="juice";
char str3[100];
int len;
len=strlen(str1);
strcpy(str1,str2);
printf("%s",str1);
printf("%d",len);
}
