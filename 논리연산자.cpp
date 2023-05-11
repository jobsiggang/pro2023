
#include <stdio.h>
int main()
{
int a=2,b=4,c=1;
printf("%d\n",a<b||b>c);
printf("%d\n",!(a>b&&b>c));
printf("%d\n",a!=0 && c>0);
printf("%d\n",!(a==1)||b<c);
printf("%d\n",a>b || b<c);

return 0;
}
