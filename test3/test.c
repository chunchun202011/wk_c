#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "student.h"

void getList(Student aStu[],int number);
int save(Student aStu[], int number);

int main(int argc,char const *argv[]) {
	int number = 0;
	printf("输入学生数量：");
	scanf("%d",&number);
	//Student aStu[number];
	Student aStu[5];

	getList(aStu,number);
	if (save(aStu,number))
	{
		printf("保存成功\n");
	}
	else {
		printf("保存失败\n");
	}

	return 0;
}

void getList(Student aStu[],int number) {
	//char format[STR_LEN];
	char format[20];
	sprintf(format,"%%%ds",STR_LEN-1);//sprintf:文件的输入输出

	int i;
	for ( i = 0; i < number; i++)
	{
		printf("第%d个学生：\n",i);
		printf("\t姓名");
		scanf(format,aStu[i].name);
		printf("\t性别（0-男,1-女，2-其他）：");
		scanf("%d",&aStu[i].gender);
		printf("\t年龄：");
		scanf("%d",&aStu[i].age);
	}
}

int save(Student aStu[],int number) {
	int ret = -1;
	FILE* fp = fopen("student.data","w");//打开这个文件，要写
	if (fp)
	{
		ret = fwrite(aStu, sizeof(Student), number, fp);//写aStu数组进去，每个sizeof(Student)那么大，写number个，写到fp
		fclose(fp);
	}
	return ret == number;//返回1：成功 0：失败
}
