#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//程序：一直做分而治之的事情



//带参数的宏
//#define cube(x) ((x)*(x)*(x))
//
//int main() {
//	printf("%d\n",cube(5));
//	return 0;
//}

//预定义的宏
//int main(int argc,char const *argv[]) {
//	printf("%s:%d\n",__FILE__,__LINE__);
//	printf("%s,%s\n",__DATE__,__TIME__);
//}


//const double PI = 3.14159;//那时候还没有const,于是定义#define
//#define PI 3.14159 //定义一个符号：宏
//#define FORMAT "%f\n"
//#define PI2  2*PI
//#define PRT printf("%f ",PI); \
//		printf("%f\n",PI2);
//
//int main(int argc,char const *argv[]) {
//
//	//printf("%f\n",2*PI*3.0);
//	//printf(FORMAT,PI2*3.0);
//	PRT;
//
//	return 0;
//}
