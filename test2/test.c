#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//�ļ��Ĳ���
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
		printf("�޷����ļ�\n");
	}
	return 0;
}


//�ֱ����printf��scanf
//int main(int argc, char const* argv[]) {
//	int num;
//	int i1 = scanf("%i",&num);
//	int i2 = printf("%d\n",num);
//	printf("%d:%d\n",i1,i2);
//	return 0;
//}

//int main(int argc,char const *argv[]) {
//	int num;
//	//scanf("%*d%d",&num);//����
//	scanf("%i",&num);
//	printf("%d\n",num);
//	printf("%*d\n",6,123);
//
//	printf("%9.2f\n",123.0);
//	return 0;
//}


//int main(int argc,char const *argv[]) {
//	printf("%09d\n",123); //9��ʾռ��9���ַ��Ŀռ�
//	printf("%-+9d\n",-123); //-��ʾ����룬Ҫ��width��ϵ��һ���������
//	return 0;
//}
