#include<bits/stdc++.h>
using namespace std;
// SELECTION SORT  AVG TIME COMPLEXITY - O(N^2)
// BOTH THE BEST AND WORST CASE TIME COMPLEXITY IS O(N^2)
// IN-PLACE ALGORITHM
void selectionSort(int arr[],int n){
    int outer=0;
    int small=0;
    int inner;
    /*
    This Outer Loop goes from starting of the array to ending 
    for every iteration we will be storing the small variable
    as current index
    */
    for(int outer=0;outer<n;outer++){
        small=outer;
        /*
        We Check for the number that is smaller than the number at 
        index small(don't forget that it is intialised to outer at 
        the start) and we update our small as we encounter an     
        element that is smaller than at the index small
        */
        for(int inner=outer+1;inner<n;inner++){
            if(arr[inner]<arr[small]){
                small=inner;
            }
        }
        /*
        So as the inner index hit the last value of the array
        we found our smaller number ,so we can swap it with the 
        outer index element
        */
        swap(arr[outer],arr[small]);
    }
}


int main() {
    int arr[]={-3,-290,1,98,23,211,934,-90,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// The only good thing about selection sort is ,it uses less memory.
// It's Space Complexity is O(1)
