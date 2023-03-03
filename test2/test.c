#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//文件的操作
int main(int argc,char const *argv[]) {
	FILE* fp = fopen("12.in","r");
	if (fp)
	{
		int num;
		fscanf(fp,"%d",&num);
		printf("%d\n",num);
		fclose(fp);
	}
	else
	{
		printf("无法打开文件\n");
	}
	return 0;
}


//分别测试printf和scanf
//int main(int argc, char const* argv[]) {
//	int num;
//	int i1 = scanf("%i",&num);
//	int i2 = printf("%d\n",num);
//	printf("%d:%d\n",i1,i2);
//	return 0;
//}

//int main(int argc,char const *argv[]) {
//	int num;
//	//scanf("%*d%d",&num);//跳过
//	scanf("%i",&num);
//	printf("%d\n",num);
//	printf("%*d\n",6,123);
//
//	printf("%9.2f\n",123.0);
//	return 0;
//}


//int main(int argc,char const *argv[]) {
//	printf("%09d\n",123); //9表示占据9个字符的空间
//	printf("%-+9d\n",-123); //-表示左对齐，要和width联系在一起才有意义
//	return 0;
//}
