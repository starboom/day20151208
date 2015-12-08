#include <stdio.h>


void main()
{
	float a = -0.2;
//	if(0<a<1) //0<a?no return 0;0<1? yes return 1
	if(a>0 && a<1) // not match print d212	
{
		printf("dsd");
}
	else
	{
	printf("d212");
}
}

//如何比较两个浮点数。。。
// float a,b;
// a == b a!=b
// abs(a-b) < 0.00000001 //确定一个精度 