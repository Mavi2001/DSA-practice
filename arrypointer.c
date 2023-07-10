#include<stdio.h>
int main()
{
    int arr[50];
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p;
    for(int i=0;i<size;i++)
    {
        p = &arr[i];
        printf("%p\n",p);
    }
    printf("Now other addresses are:\n");
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n",&arr);
    // printf("%p\n",&arr[4]);
    // printf("%p",&arr[0]);

}