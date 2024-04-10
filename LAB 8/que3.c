/*
Q3. Consider four arrays {1,2,3}; {1,2}; {1,2,3,4}, {1}. Using the concept of array
of pointers, print all the elements in the arrays.
*/
#include <stdio.h>
#include <stdio.h>
int main(){
    int arr1[]={1,2,3};
    int arr2[]={1,2};
    int arr3[]={1,2,3,4};
    int arr4[]={1};

    int * array[]= {arr1,arr2,arr3,arr4};
    int sizes[]={3,2,4,1};  
     int num_array = sizeof(array) / sizeof(array[0]);

     for (int i=0;i<num_array ;i++) {
        printf("Array %d: ", i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d ", array[i][j]);
     }
     printf("\n");

}
    return 0;
}