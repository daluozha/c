#include <stdio.h>
void selection_sort(int arr[],int len){
    int i,j,temp;
    for(i=0;i<len-1;i++){
        int min = i;
        for(j=i+1;j<len;j++) if(arr[min]>arr[j]) min=j;
        if(min!=i){
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        /* swap(&a[min], &a[i]);  */   // 使用自定义函数交換
    }
}
/*
void swap(int *a,int *b) // 交换两个变量
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    selection_sort(arr, len);
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}