#include <stdio.h>
void prt(unsigned int d)
{
   if (d>9)  putchar('A'+d-10);
   else printf("%d",d);
}
void fun(unsigned int d)
{
  if (d>=12) {
  fun(d/12);
  }
  prt(d%12);
}
int main(void)
{
 unsigned int d;
 printf("����һ���޷�������");
 scanf("%u",&d);  /*����һ���޷�������*/
 printf("%o\n",d);/*����˽�����ʽ*/
 fun(d);    /*���ʮ��������ʽ*/
 return 0;
}