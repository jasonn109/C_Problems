#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"

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

typedef struct __points__
{
	int x;
	int y;
	int weight;

}Point;

typedef struct __XY_PLANE__
{
	Point *point;
	int cur_no_points;
	int number;
}Plane;

Course * initialize_Course(int total_no_student);

int add_student(Course *course);

int deallocate_course(Course *course);

int search_student_name(Course *course, char * name);

int search_student_rollno(Course *course, int rollno);

int get_max_marks(Course *course);

int get_details(Course *course , char ch);

Plane * initialize_plane(int num);

int add_point(Plane * plane, int x, int y , int weight);

int get_max_weight(Plane *plane);

void get_no_line(Plane * plane, int *ver, int *hor);

int deallocate_plane(Plane *plane);