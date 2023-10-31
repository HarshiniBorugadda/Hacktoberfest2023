#include <stdio.h>
int binarySearch(int arr[], int low, int high, int ele) {
    int mid=0;
    while (low<=high) {
        mid=low+(high-low)/2;
        if (arr[mid]==ele){
            return mid;
        }
        if (arr[mid]>ele){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main() {
    int element, n, result;
    printf("Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements into the array in the any order: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int i,j,temp;
    for (i=0;i<n;++i){
        for (j=i+1;j<n;++j){
            if (arr[i] > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
            }
        }
    printf("Element you wanna search: ");
    scanf("%d",&element);
    result = binarySearch(arr,0,n-1,element);
    if (result == -1) {
        printf("Element not found:(");
    } 
    else {
        printf("Element is found at index %d :)",result);
    }
    return 0;
}
