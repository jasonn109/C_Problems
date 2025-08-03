
#include "stdio.h"
#include "stdint.h"
#include "math.h"
#include "stdlib.h"

#define SIZE 5
#define SIZE_A 5
#define SIZE_B 5

void display_array(int arr[], int size);

void sort_desc_array(int arr[], int size);
void sort_asc_array(int arr[], int size);
int is_present(int arr[],int size, int num);

int union_set(int A[], int B[], int size_a, int size_b);

int shift_left_arr(int * arr, int size, int shift);

int copy_arr(int * arr, int size, int source_arr[]);

int intersection_set(int a[], int b[], int size_a, int size_b);

int difference_set(int a[], int b[], int size_a, int size_b);

void sort_a_arr(int *arr, int size);

int remove_duplicate(int *arr, int size);

int search_array(int arr[], int digit, int size);
int binary_search(int *arr, int size, int digit);
int sum_of_prod(int size, int arr[]);

int str_len();

int isPalindrome(char *str);
int insert_data_2d(int row, int col, int (*arr)[col]);

void display_2d_array( int row , int col,int (*arr)[col]);

int transpose(int row_size, int col_size , int arr[][col_size]);

void get_sum_col(int row, int col, int arr[][col]);

int power_rec(int num, int power);

int factorial_rec(int num);
