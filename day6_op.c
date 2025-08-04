#include "day6_op.h"


Course* initialize_Course(int total_no_student)
{
    Course *course;
    course = (Course *)malloc(sizeof(Course));
    if(course==NULL)
    {

        return NULL;
    }

    course->student = (Student * )malloc(sizeof(Student)*total_no_student);
    if(course->student== NULL)
    {
        free(course);
        return NULL;
    }
	course->cur_no_student=0;
	course->total_student_no= total_no_student;
	return course;
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

}
