//例题1-1 圆柱体的表面积
/*
输入底面半径r和高h，输出圆柱体的表面积，保留三位小数。
样例输入：
3.5 9
样例输出：
Area = 274.889 
*/ 

#include<stdio.h>
#include<math.h>
int main()
{
	const double pi = acos(-1.0);  //const 定义常量
	double r,h,s1,s2,s;
	scanf("%lf%lf",&r,&h);  //double输入 lf
	s1=pi*r*r;
	s2=2*pi*r*h;
	s=2.0*s1+s2;
	printf("Area = %.3f\n",s);
	return 0;
}

//反余弦函数表示PI 　acos(-1.0) = π
// 如果实在不理解就画一下三角函数图像 
----------------------------------------------------------------------------------
//例题1-2 三位数反转 
/*输入一个三位数，分离出它的百位，十位和个位，反转后输出
样例输入
127
样例输出
721
*/
 
#include<stdio.h>
int main()
{
	int n,m=0;
	scanf("%d",&n);
	m=(n%10)*100+(n/10%10)*10+(n/100);
	printf("%d\n",m);
	return 0;
 }

---------------------------------------------------------------------------------------
//例题1-3 交换变量
/*
输入两个整数a和b，交换后输出
输入
22 44
输出
44 22
*/
//方法一 中间变量法 
#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d %d\n",a,b);
	return 0;
}

//方法二 
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n",a,b);
	return 0;
}

---------------------------------------------------------------

//1-7
#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if((y%100!=0 && y%4==0) || (y%400==0)){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;	
}
