#include<bits/stdc++.h>
using namespace std;
// MERGE SORT AVG,BEST,WORST CASE TIME COMPLEXITY - O(N LOGN)
// DIVIDE AND CONQUER ALGORITHM


// this divides the array into parts where we will assign the lower 
// elements of pivot to left and higher elements to its right

void letsMerge(int arr[], int low, int mid, int high){
   int left_half_size=mid-low+1;
    int right_half_size=high-mid;
    int arrl[left_half_size];
    for(int i=0;i<left_half_size;i++){
        arrl[i]=arr[low+i];
    }
    int arrr[right_half_size];
    for(int i=0;i<right_half_size;i++){
        arrr[i]=arr[mid+i+1];
    }
    int k=low;
    int i=0;
    int j=0;
    
    while(i<left_half_size && j<right_half_size){
        if(arrl[i] <= arrr[j]){
            arr[k++]=arrl[i++];
        }
        else{
            arr[k++]=arrr[j++];
        }
    }
    while(i<left_half_size){
        
        arr[k++]=arrl[i++];
    }
    while(j<right_half_size){
        
        arr[k++]=arrr[j++];
    }
    
}


void mergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=low+((high-low)/2);
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        
        
        letsMerge(arr,low,mid,high);
    }
}

int main() {
    int arr[]={-3,-290,1,98,23,211,934,-90,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//
// Space Complexity is O(n) due to the stack space
