#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//位段
void prtBin(unsigned int number);

struct U0
{
	unsigned int leading : 3;
	unsigned int FLAG1 : 1;
	unsigned int FLAG2 : 1;
	int trailing : 27;
};

int main(int argc,char const *argv[]) {
	struct U0 uu;
	uu.leading = 2;
	uu.FLAG1 = 0;
	uu.FLAG2 = 1;
	uu.trailing = 0;
	printf("sizeof(uu)=%lu\n",sizeof(uu));
	prtBin(*(int*)&uu);//取出uu变量的地址（1个指向struct U0的指针），强转为指向int的指针，取指针所指的int，再把int交给函数
	return 0;
}

//输出二进制位
void prtBin(unsigned int number) {
	unsigned mask=1u<<31;
	for (; mask; mask>>=1)
	{
		printf("%d",number & mask?1:0);
	}
	printf("\n");
}

//输出一个数的二进制
//int main(int argc,char const *argv[]) {
//	int number;
//	//scanf("%d",&number);
//	number = 0x55555555;
//	unsigned mask = 1u << 31;//1u:1，unsigned的数，往左移31个比特，得到最高位为1的东西
//	for (; mask; mask >>= 1 )//没有初始，条件是mask，每次右移1位
//	{
//		printf("%d",number & mask?1:0);
//	}
//	printf("\n");
//	return 0;
//}


//左移和右移的测试
//int main(int argc,char const *argv[]) {
//	int a = 0x80000000;
//	unsigned int b = 0x80000000;
//	printf("a=%d\n",a);
//	printf("b=%d\n", b);
//	printf("a>>1=%d\n", a>>1);
//	printf("b>>1=%d\n", b>>1);
//
//	return 0;
//}

//移位运算
//int main(int argc,char const *argv[]) {
//	unsigned char c = 0xA5;
//	printf("   c=%d\n",c);
//	printf("c<<2=%d\n", c<<2);
//	return 0;
//}


//int main(int argc,char const *argv[]) {
//	unsigned char c = 0xA5;
//	printf("   c=%hhx\n",c);
//	printf("c<<2=%hhx\n", c<<2);
//	return 0;
//}

//取反和补码运算
//int main(int argc,char const *argv[]) {
//	unsigned char c = 0xAA;
//	printf(" c=%hhx\n",c);
//	printf("~c=%hhx\n", (char)~c);//按位取反
//	printf("-c=%hhx\n", (char) - c);//负号表示补码
//	return 0;
//}
