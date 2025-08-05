#include "day6_op_1.h"


Course * initialize_Course( int total_no_student)
{
	Course *course;
    course = (Course *)malloc(sizeof(Course));
    if(course==NULL)
    {

        return NULL;
    }
    course->cur_no_student=0;
	course->total_student_no= total_no_student;

    
    course->student = (Student * )malloc(sizeof(Student)*total_no_student);
    if(course->student== NULL)
    {
        free(course);
        return NULL;
    }
	
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

	scanf("%s",course->student[course->cur_no_student].name);

	printf("Enter the student age:\n");

	scanf("%d",&course->student[course->cur_no_student].age);

	printf("Enter the marks:\n");

	scanf("%d",&course->student[course->cur_no_student].marks);

	course->cur_no_student++;

	return 1;

}


int search_student_rollno(Course *course, int rollno)
{
	if(course->cur_no_student== 0)
	{
		return 0;
	}
	for(int i=0; i<course->cur_no_student; i++)
	{
		if(course->student[i].rollno==rollno)
		{
			return i+1;

		}
	}
	return 0;

}

int search_student_name(Course *course, char * name)
{
	if(course->cur_no_student== 0)
	{
		return 0;
	}
	for(int i=0; i<course->cur_no_student; i++)
	{
		if(!strcmp(course->student[i].name,name))
		{
			return i+1;

		}
	}
	return 0;
}

int display_student_data(Student * student)
{
	if(student== NULL)
		return 0;
	printf("Student Name:%s\n", student->name);
	printf("Student Rollno:%d\n", student->rollno);
	printf("Student age:%d\n", student->age);
	printf("Student marks:%d\n", student->marks);
	return 1;
}

int get_max_marks(Course *course)
{

		if(course->cur_no_student== 0)
	{
		return 0;
	}

	int max=course->student[0].marks;
	int position=0;
	for(int i=0; i<course->cur_no_student; i++)
	{
		if(course->student[i].marks>max)
		{
			max= course->student[i].marks;
			position = i;

		}
	}

	display_student_data((*course).student + position);
	return 1;
}

int get_details(Course *course , char ch)
{
	for(int i=0;i<course->cur_no_student; i++)
	{
		 if(course->student[i].name[0]==ch)
		 {
		 	display_student_data((*course).student + i);
		 }
	}
}
int deallocate_course(Course *course)
{
	if(course==NULL)
	{
		return 0;
	}

	free(course->student);
	free(course);
	return 1;
}


Plane * initialize_plane(int num)
{
	Plane *plane;
	plane = (Plane *)malloc(sizeof(Plane));
	if(plane == NULL)
	{
		return NULL;
	}

	plane->number =num;
	plane->cur_no_points =0;
	plane->point = (Point *)malloc(sizeof(Point)*num);
	if(plane->point==NULL)
	{
		free(plane);
		return NULL;
	}

	return plane;
}

int add_point(Plane * plane, int x, int y , int weight)
{
	if(plane->cur_no_points == plane->number)
	{
		return 0;
	}

	plane->point.x= x;
	plane->point.y= y;
	plane->point.weight= weight;

	plane->cur_no_point++;
	return 1;
}

int get_max_weight(Plane *plane)
{
	int max= plane->point[i].weight;
	for(int i=0; i<plane->cur_no_point; i++)
	{
		if(plane->point[i].weight>max)
			{
				max = plane->point[i].weight;
			}
	}
	return max;
}

void get_no_line(Plane * plane, int *ver, int *hor)
{
	*ver = 0; 
	*hor = 0;

	for(int i=0; i<plane->cur_no_point; i++)
	{
		for(int j =0; j<plane->cur_no_point; j++)
		{
			if(i==j)
			{
				continue;
			}
			if(plane->point[i].x==plane->point[j].x)
			{
				*ver++;
			}
			else if(plane->point[i].y==plane->point[j].y)
			{
				*hor++;
			}
		}
	}
}

int deallocate_plane(Plane *plane)
{
	if(plane==NULL)
	{
		return 0;
	}
	free(plane->point);
	free(plane);
}