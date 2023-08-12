#include <stdio.h>
int main() {
    int arr[] = {12, 34, 56, 78, 90, 23, 45, 67, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target;
    printf("Enter the number you want to search for: ");
    scanf("%d", &target);
    for (int i=0;i<size;i++){
    	
    if (arr[i] == target) {
        printf("Number %d found at index %d.\n", target,i);
    } 
    
    }
    
    return 0;
}
