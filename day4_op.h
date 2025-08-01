
#include "stdio.h"
#include "stdint.h"
#include "math.h"

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
