#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

#define STUDENT_LIMIT 3
#define STUDENT_LIMIT_EXCEEDED 4

#define ALLOCATION_FAIL_COURSE 1
#define ALLOCATION_FAIL_STUDENT 2

#define ALLOCATON_PASS 3


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

int initialize_Course(Course *course, int total_no_student);

int add_student(Course *course);

