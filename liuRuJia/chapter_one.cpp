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
