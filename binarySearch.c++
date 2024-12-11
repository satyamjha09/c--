#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> arr, int tar ) {
    int start = 0; 
    int end = arr.size() - 1;

    while(start <= end) {
        int mid = start + end / 2;

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




int main() {

    vector<int> arr = {-1,0,3,4,5,9,12};
    int target = 12;

   

    return 0;
}