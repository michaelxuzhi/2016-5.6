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
 printf("输入一个无符号整数");
 scanf("%u",&d);  /*输入一个无符号整数*/
 printf("%o\n",d);/*输出八进制形式*/
 fun(d);    /*输出十二进制形式*/
 return 0;
}