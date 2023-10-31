#include <stdio.h>
#include<stdlib.h>
int main() {
    int element, n, result;
    printf("Size: ");
    scanf("%d", &n);
    int arr[n],target;
    printf("Enter the elements into the array: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element: ");
    scanf("%d",&target);
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
    int closest=2147483647,low,high,summ;
    for(int i=0;i<n-2;i++){
        low=i+1;
        high=n-1;
        while (low<high){
            summ=arr[i]+arr[low]+arr[high];
            if (abs(target-summ)<abs(target-closest)){
                closest=summ;
            }
            if (summ>target){
                high=high-1;
            }
            else{
                low=low+1;
            }
        }
    }
    printf("The sum of three integers which is closest to the target is: %d\n Yayy:)",closest);
    return 0;
}
