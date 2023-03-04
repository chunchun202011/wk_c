#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//λ��
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
	prtBin(*(int*)&uu);//ȡ��uu�����ĵ�ַ��1��ָ��struct U0��ָ�룩��ǿתΪָ��int��ָ�룬ȡָ����ָ��int���ٰ�int��������
	return 0;
}

//���������λ
void prtBin(unsigned int number) {
	unsigned mask=1u<<31;
	for (; mask; mask>>=1)
	{
		printf("%d",number & mask?1:0);
	}
	printf("\n");
}

//���һ�����Ķ�����
//int main(int argc,char const *argv[]) {
//	int number;
//	//scanf("%d",&number);
//	number = 0x55555555;
//	unsigned mask = 1u << 31;//1u:1��unsigned������������31�����أ��õ����λΪ1�Ķ���
//	for (; mask; mask >>= 1 )//û�г�ʼ��������mask��ÿ������1λ
//	{
//		printf("%d",number & mask?1:0);
//	}
//	printf("\n");
//	return 0;
//}


//���ƺ����ƵĲ���
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

//��λ����
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

//ȡ���Ͳ�������
//int main(int argc,char const *argv[]) {
//	unsigned char c = 0xAA;
//	printf(" c=%hhx\n",c);
//	printf("~c=%hhx\n", (char)~c);//��λȡ��
//	printf("-c=%hhx\n", (char) - c);//���ű�ʾ����
//	return 0;
//}
