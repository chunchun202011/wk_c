#define  _CRT_SECURE_NO_WARNINGS 1

#ifndef _MAX_H_
#define _MAX_H_

double max(double a, double b);
extern int gAll;//告诉编译器在整个项目中有个gAll的东西

struct Node
{
	int value;
	char* name;
};

#endif // !_MAX_H_
