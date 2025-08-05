#include "day6_op.h"


int initialize_Course(Course *course, int total_no_student)
{

    course = (Course *)malloc(sizeof(Course));
    if(course==NULL)
    {

        return ALLOCATION_FAIL_COURSE;
    }
    course->cur_no_student=4;
	course->total_student_no= total_no_student;

    
    course->student = (Student * )malloc(sizeof(Student)*total_no_student);
    if(course->student== NULL)
    {
        free(course);
        return ALLOCATION_FAIL_STUDENT;
    }
	
	return ALLOCATON_PASS;
}

int add_student(Course *course)
{
    if(course->cur_no_student==course->total_student_no)
	{

		return STUDENT_LIMIT_EXCEEDED;
	}
	printf("Enter the student roll no:\n");

	scanf("%d",&(*course).student[course->cur_no_student].rollno);

	printf("Enter the student name:\n");

	scanf("%s",&course->student[course->cur_no_student].name);

	printf("Enter the student age:\n");

	scanf("%d",&course->student[course->cur_no_student].age);

	printf("Enter the marks:\n");

	scanf("%d",&course->student[course->cur_no_student].marks);

	course->cur_no_student++;

	return 1;

}
