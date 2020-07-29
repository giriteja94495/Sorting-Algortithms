#include<bits/stdc++.h>
using namespace std;
// INSERTION SORT AVG AND WORSTCASE TIME COMPLEXITY - O(N^2)
// THE BEST CASE TIME COMPLEXTITY IS O(N)
// In-Place Algorithm
void insertionSort(int arr[],int n){
   int outer;
   int index;
   int value;
    /*
    The outer variable loops through the array to get the sorted array
    from the unsorted array,intially we assume that arr[0] is sorted.
    */
    for(int outer=0;outer<n;outer++){
        value=arr[outer];
        index=outer;
        /*
        so ,here we basically check whether the element at index-1 is
        greater than the value ,if it so then we shift it to the right 
        that is done by assigning the arr[index]=arr[index-1];
        let us assume ,we have an array ={4,3,2,1};
        and when outer is 1 ,the index will be checking if 
        arr[index-1]>val
        arr[1-1]>4
        so we make the array as {4,4,2,1,}
        now index is updated to 0 so it will come out of the while loop
        and assigns the 0th element to the value
        arr[0]=3,arr become {3,4,2,1} in this way we do it for all the 
        elements of the array
        */
        while(index>0 && arr[index-1]>value){
            arr[index]=arr[index-1];
            index--;
        }
        arr[index]=value;
    }
}


int main() {
    int arr[]={-3,-290,1,98,23,211,934,-90,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// the only good thing about insertion sort is ,it uses less memory 
// Space Complexity is O(1)
