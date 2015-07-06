#include <stdio.h>
int main(){
	int a;
	int test=1000;
	printf("请输入只有三位的正整数:\n");
	while((test>=10)||(test<1))
	{
		scanf("%d",&a);
		test  = a/100;
	}

	int a1, a2, a3,a4;
	a1 = a/100;
	a2 = a/10-a/100*10;
	a3 = a-100*a1-10*a2;
	a4 = a1+a2*10+a3*100;
	printf("输出结果是：%d\n", a4);

	return 0;
}
