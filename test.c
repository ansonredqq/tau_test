#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i,j,k,d;
    for (i=0;i<n;i++){
        nums1[m+i] = nums2[i];
    }
    for (j=0;j<nums1Size-1;j++){
        for (k=j+1;k<nums1Size;k++){
            if (nums1[j]>nums1[k]){
             d = nums1[j];
             nums1[j] = nums1[k];
             nums1[k] = d;
            }
        }
    }
}
int main(void){
    int a = 5;
    printf("hello world");
    int array1[5] = {1,2,3,0,0};
    int array2[2] = {2,5};
    int nums1Size = 5;
    int m = 3;
    int nums2Size = 2;
    int n = 2;
    merge(array1,  nums1Size,  m, array2,  nums2Size,  n);
    return 0;
}

