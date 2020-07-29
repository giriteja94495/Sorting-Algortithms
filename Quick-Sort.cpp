#include<bits/stdc++.h>
using namespace std;
// QUICK SORT AVG AND BEST CASE TIME COMPLEXITY - O(N LOGN)
// THE WORST CASE TIME COMPLEXTITY IS O(N^2)
// DIVIDE AND CONQUER ALGORITHM


// this divides the array into parts where we will assign the lower 
// elements of pivot to left and higher elements to its right
int  partition(int arr[], int left, int right, int pivot){
    while(left <= right){
        
        // to get the element that is greater than the pivot
        while(arr[left]<pivot){
            left++;
        }
        
        // to get the element that is less than the pivot
        while(arr[right]>pivot){
            right--;
        }
        
        // if our left<=right ,then we swap the elements and 
        // increment and decrement the left and right pointers
        if(left<=right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    
    
    return left;
}

// this is a helper function that recursively calls the quicksort function
void helperQuickSort(int arr[],int left,int right){
    if(left>=right){
        return ;
    }
    int pivot=arr[(left+right)/2];
    int nextPivot=partition(arr,left,right,pivot);
    helperQuickSort(arr,left,nextPivot-1);
    helperQuickSort(arr,nextPivot,right);
}

// this function is made just for the good readability.
void quickSort(int arr[],int n){
   int left=0;
   int right=n-1;
   helperQuickSort(arr,left,right);
}


int main() {
    int arr[]={-3,-290,1,98,23,211,934,-90,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//
// Space Complexity is O(n) due to the stack space
