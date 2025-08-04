#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

#define STUDENT_LIMIT_EXCEEDED 2

typedef struct __student__
{
	int rollno;
	char name[20];
	int age;
	int marks;

}Student;

typedef struct __course__
{
	Student* student;
	int cur_no_student;
	int total_student_no;
	int status;

}Course;

Course* initialize_Course(int total_no_student);

