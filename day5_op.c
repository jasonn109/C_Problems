#include "day5_op.h"



Student_data initialize_Student_data(Student_data student_data, int total_no_student)
{
	student_data.cur_student_no=0;
	student_data.total_student_no= total_no_student;
	return student_data;
}

Student_data insert_student_data(Student_data student_data)
{
	if(student_data.cur_student_no==student_data.total_student_no)
	{

		return student_data;
	}
	printf("Enter the student roll no:\n");

	scanf("%d",&student_data.student[student_data.cur_student_no].rollno);

	printf("Enter the student name:\n");

	scanf("%s",&student_data.student[student_data.cur_student_no].name);

	printf("Enter the student age:\n");

	scanf("%d",&student_data.student[student_data.cur_student_no].age);

	printf("Enter the marks:\n");

	scanf("%d",&student_data.student[student_data.cur_student_no].marks);

	student_data.cur_student_no++;

	return student_data;
}

int display_student_data(Student_data student_data)
{
	if(student_data.cur_student_no==0)
	{
		printf("No student data available\n");
	}
	for(int i =0; i<student_data.cur_student_no; i++)
	{
		printf("Student Rollno: %d\n", student_data.student[i].rollno);
		printf("Student name: %s\n", student_data.student[i].name);
		printf("Student age: %d\n", student_data.student[i].age);
		printf("Student marks: %d\n", student_data.student[i].marks);
		printf("\n");
	}

	return 1;
}

Bill initialize_bill(Bill bill)
{
	
	
	bill.cur_no_items=0;
	bill.total_no_items = MAX_ITEMS;
	bill.total = 0; 
	bill.discount = 0;
	
	return bill;
}

Bill  add_items(Bill bill)
{
		if(bill.cur_no_items == bill.total_no_items)
		{
			bill.status = ITEM_MAX_LIMIT;
			return bill;
		}
		printf("Enter the Item price:\n");
		scanf("%f", &bill.item[bill.cur_no_items].price);

		printf("Enter the Item Quantity:\n");
		scanf("%d", &bill.item[bill.cur_no_items].quantity);

		bill.cur_no_items++;
		bill.status= 1;

		return bill;


}	

Bill calc_grand_total(Bill bill)
{

	float total=0, discount = 0;
	if(bill.cur_no_items== 0)
	{
		bill.total = 0;
		bill.discount =0;
		return bill;
	}

	for(int i=0; i<bill.cur_no_items; i++)
	{
		total = (bill.item[i].price * bill.item[i].quantity) + total;
	}

	if(total<=1000)
	{
		discount = total * 0.05;
	}
	else if(total>1000 && total <=5000)
	{
		discount = total * 0.1;
	}
	else
	{
		discount = 0.15;
	}

	total = total - (total * discount);

	bill.total = total ;
	bill.discount = discount;
	return bill;
}

void display_bill(Bill bill)
{
	int subtotal;
	Printf("Item\t\tPrice\t\tQuantity\t\tSubtotal");

	for(int i=0; i<bill.cur_no_items; i++)
	{
		printf("item%d\t\t%.2f\t\t%d\t\t%.2f",i+1, bill.item[i].price, bill.item[i].quantity, bill.item[i].price *bill.item[i].quantity);
		printf("\n");
	}
	printf("--------------------------------------------------------\n");

	Printf("TOTAL : %.2f\n", bill.total);
	Printf("Discount :%.2f",bill.discount);

}