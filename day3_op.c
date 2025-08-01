#include "day3_op.h"


void sort_asc_array(int arr[], int size)
{
    int temp;
    int flag=0;
    for(int i=0; i<size; i++)
    {

        for(int j=i+1;j<size; j++)
        {

            if(arr[i]>arr[j])
            {
                flag=1;
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
    for(int i=0; i<size; i++)
    {

        for(int j=i+1;j<size; j++)
        {

            if(arr[i]<arr[j])
            {
                flag=1;
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
    for(int i=0; i<size; i++)
    {

        for(int j=i+1;j<size; j++)
        {

            if(arr[i]>arr[j])
            {
                flag=1;
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        if(flag==0)
            break;
        flag=0;
    }
    

}

int remove_duplicate(int arr[], int size)
{

    sort_a_arr(arr, size);
 int final_size =size;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==arr[i+1])
        {
            for(int j=i;j<final_size; j++)
            {
                arr[j]=arr[j+1];
            }

            final_size--;

        }

    }

    display_array(arr, final_size);

    
}
