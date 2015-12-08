#include <stdio.h>

typedef int A[5];


int main(int argc, char const *argv[])
{
	A *p;// int (*p)[5]
	A a1; // int a1[5]
	p = &a1; //数组名代表第一个元素的地址，??
	int i;
	for(i = 0;i<5;i++)
	{
		a1[i] = i+1;
	}

	//通过指针P输出a1的数组
	for(i = 0;i <5 ; i++)
	{
		printf("%d\n",*((int*)p + i) );
		printf("%d\n",*(int*)((int)p + 4*i) );
	}
	return 0;

}