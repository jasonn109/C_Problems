#include "day6_op.h"
#include "assert.h"

int main()
{

	Course *course;
	assert(initialize_Course(course,2)==ALLOCATON_PASS);
	assert(course->cur_no_student==0);
	assert(course->total_student_no==2);
	//add_student(course);
//	add_student(course);
	//add_student(course);
	//assert(add_student(course)==STUDENT_LIMIT_EXCEEDED);
	printf("runing");

	return 0;
}