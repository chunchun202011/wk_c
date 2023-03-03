#define  _CRT_SECURE_NO_WARNINGS 1

#ifndef _STUDENT_H_
#define _STUDENT_H_

const int STR_LEN = 20;

typedef struct _student {
	char name[20];
	int gender;
	int age;
} Student;


#endif // !_STUDENT_H_

