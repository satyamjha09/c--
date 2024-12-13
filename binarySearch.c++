#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> arr, int tar ) {

    int start = 0; 
    int end = arr.size() - 1;

    while(start <= end) {

        int mid = start + (end - start)/2;

        if(tar > arr[mid]){
            start = mid + 1;
        } else if(tar < arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int BinarySearchRecurion(vector<int> arr, int target, int start = 0, int end){

    if(start <= end) {

         int mid = start + (end - start)/2;


        if(target > arr[mid]){
            return BinarySearchRecurion(arr, target, mid + 1, end);
        }

        else if(target < arr[mid]) {
            return BinarySearchRecurion(arr, target, start, mid - 1);
        }else {
            return mid;
        }

    }

    return -1;

   

}




int main() {

    vector<int> arr = {-1,0,3,4,5,9,12};
    
    int target = 12;
    int start = 0;
    int end = arr.size() - 1;

    int result = binarySearch(arr, target);
    int resul1 = BinarySearchRecurion(arr, target, start, end);

    cout<< result <<" ";

   

    return 0;
}