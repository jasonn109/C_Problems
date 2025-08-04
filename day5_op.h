#ifndef DAY5_OP_H
#define DAY5_OP_H

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

#define MAX_STUDENT 10
#define MAX_ITEMS 5
#define ITEM_MAX_LIMIT 2

typedef struct __student__
{
	int rollno;
	char name[20];
	int age;
	int marks;

}Student;

typedef struct __Student_data__
{
	Student student[MAX_STUDENT];
	int cur_student_no;
	int total_student_no;
	int status;

}Student_data;

typedef struct __item__
{
	float price;
	int quantity;

}Item;

typedef struct __Bill__
{
	Item item[MAX_ITEMS];
	int cur_no_items;
	int total_no_items;
	int status;
	float total;
	float discount;
}Bill;


Student_data initialize_Student_data(Student_data student_data, int total_no_student);
Student_data insert_student_data(Student_data student_data);

int display_student_data(Student_data student_data);

Bill initialize_bill(Bill bill);
Bill  add_items(Bill bill);

Bill calc_grand_total(Bill bill);
void display_bill(Bill bill);
#endif