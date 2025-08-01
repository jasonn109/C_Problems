
#include "day4_op.h"


void sort_asc_array(int arr[], int size)
{
    int temp;
    int flag=0;
    for(int i=0; i<size-1; i++)
    {

        for(int j=0;j<size-1; j++)
        {

            if(arr[j]>arr[j+1])
            {
                flag=1;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==0)
            break;
        flag=0;
    }
    display_array(arr, size);

}

void sort_desc_array(int arr[], int size)
{
    int temp;
    int flag=0;
    for(int i=0; i<size-1; i++)
    {

        for(int j=0;j<size-1; j++)
        {

            if(arr[j]<arr[j+1])
            {
                flag=1;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
         if(flag==0)
            break;
        flag=0;
    }
    display_array(arr, size);
}

void display_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int Max_val(int arr[], int size)
{
    int max = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }
    return max;

}

int union_set(int A[], int B[], int size_a, int size_b)
{
        int union_arr[size_a+size_b];
        int u_arr_size=0;

        for(int i=0; i<size_a; i++)
        {
            if(!(is_present(union_arr, u_arr_size, A[i])))
                union_arr[u_arr_size++]=A[i];

        }

        for(int j=0;j<size_b; j++ )
        {
            if(!(is_present(union_arr, u_arr_size, B[j])))
            {
                union_arr[u_arr_size++]= B[j];
            }
        }
        //printf("%d", u_arr_size);

        display_array(union_arr,u_arr_size);
        return 1;


}

int is_present(int arr[],int size, int num)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==num)
            return 1;
    }
    return 0;

}

int intersection_set(int a[], int b[], int size_a, int size_b)
{
    int intersect_size=(size_a>size_b?size_a:size_b);

    int intersection_set[intersect_size];
    int size_c = size_a;
    int c[size_c];
    int intersection_curr=0;

    copy_arr(c, size_c, a);

    for(int i=0;i<size_a;i++)
    {

        if((is_present(b,size_b,a[i])))
        {
            shift_left_arr(c,size_c,i+1);
            size_c--;
            if(!(is_present(c,size_c, a[i])))
            {
                intersection_set[intersection_curr++]= a[i];
            }
        }
    }
    display_array(intersection_set,intersection_curr);


}

int shift_left_arr(int * arr, int size, int shift)
{
    for(int j=0; j<shift; j++)
    {
        for(int i=0; i<size; i++)
        {
             arr[i]=arr[i+1];
        }
        size--;
    }
    return size;
}

int copy_arr(int * arr, int size, int source_arr[])
{
    for(int i=0; i<size;i++)
    {
        arr[i]=source_arr[i];
    }
}

int difference_set(int a[], int b[], int size_a, int size_b)
{
    int diff_size = (size_a+size_b);

    int diff_set[diff_size];

    int diff_curr=0;

    for(int i =0; i<size_a; i++)
    {
        if(!(is_present(b, size_b, a[i])))
        {
            diff_set[diff_curr++]= a[i];

        }
    }

     display_array(diff_set, diff_curr);
}


void sort_a_arr(int *arr, int size)
{
    int temp;
    int flag=0;
    for(int i=0; i<size-1; i++)
    {

        for(int j=0;j<size-1; j++)
        {

            if(*(arr+j)>*(arr+j+1))
            {
                flag=1;
                temp = *(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
        if(flag==0)
            break;
        flag=0;
    }


}

int remove_duplicate(int * arr, int size)
{

    sort_a_arr(arr, size);

    int cur_size=0;

    for(int i=1;i<size-1; i++)
    {
        if(arr[i]!=arr[cur_size])
        {
            arr[++cur_size] = arr[i];
        }
    }

    return cur_size+1;
}

int search_array(int arr[], int digit, int size)
{
    int index;
    for(int i=0; i<size; i++)
    {

        if(arr[i]==digit)
        {

            return i;
        }
    }

        return -1;
}

int binary_search(int *arr, int size, int digit)
{
    sort_a_arr(arr,size);

    int beg=0;
    int end=size-1;


    while(end<=beg)
    {
        int mid=beg+(end-beg)/2;

        if(digit==arr[mid])
            return mid;
        else if(digit>arr[mid])
        {
           beg= mid +1;
        }
        else if(digit<arr[mid])
        {
            end = mid-1;
        }

    }
    return -1;
}
