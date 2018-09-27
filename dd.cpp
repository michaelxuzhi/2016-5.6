#include"stdio.h"
void fun(int d)
{ 
	if(d==0) 
		return ;
	else 
	{ 
	 fun(d/12);
	 printf("%d",d%12);
	}
}
int main()
{ 
	int a;
	scanf("%d",&a);
	fun(a);
	return 0;
}