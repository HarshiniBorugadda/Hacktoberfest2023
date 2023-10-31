#include <stdio.h>
int main() {
    int element, n, result;
    printf("Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements into the array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0]<=arr[n-1]){
        printf("%d",arr[0]);
    }
    int low=0,high=n-1,mid;
    while (low<high){
        mid=(low+high)>>1;
        if (arr[0]<arr[mid]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    printf("%d",arr[low]);
    return 0;
}
