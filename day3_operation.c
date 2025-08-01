
#include "operation.h"


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

int intersection_set(int A[], int B[], int size_a, int size_b)
{

}


