#include<stdio.h>
//返回本地变量的地址是危险的
int* f(void);
void g(void);

int main(int argc, char const* argv[]) {
	int* p = f();
	printf("*p=%d\n",*p);
	g();
	printf("*p=%d\n", *p);
	return 0;
}

int* f(void) {
	int i = 12;
	return &i;
}

void g(void) {
	int k = 24;
	printf("k=%d\n",k);
}

//全局变量证明
//int f(void);
//
//int gAll = 12;//全局变量
//
//int main() {
//	f();
//
//	return 0;
//}
//
//int f(void) {
//	int k = 0;//普通本地变量
//	static int all = 1;//静态本地变量
//	printf("&gAll=%p\n",&gAll);
//	printf("&all =%p\n",&all);
//	printf("&k   =%p\n", &k);
//
//	printf("in %s all=%d\n", __func__, all);
//	all += 2;
//	printf("agn in %s all=%d\n", __func__, all);
//	return all;
//}


//静态本地变量
//int f(void);
//
//int gAll = 12;
//
//int main() {
//	f();
//	f();
//	f();
//	return 0;
//}
//
//int f(void) {
//	static int all = 1;
//	printf("in %s all=%d\n", __func__, all);
//	all += 2;
//	printf("agn in %s all=%d\n", __func__, all);
//	return all;
//}



//int f(void);
//
//int gAll=12; //全局变量：和任何函数都没有关系，和main和f都无关
//
//int main(int argc,char const *argv[]) {
//	printf("in %s gAll=%d\n",__func__,gAll);
//	f();
//	printf("agn in %s gAll=%d\n", __func__, gAll);
//	return 0;
//}
//
//int f(void) {
//	int gAll = 1;
//	{
//		int gAll = 2;
//		printf("in %s gAll=%d\n", __func__, gAll);
//		gAll += 2;
//		printf("agn in %s gAll=%d\n", __func__, gAll);
//	}
//	
//	return gAll;
//}
