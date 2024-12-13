#include<iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> arr, int target) {

    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {

        int mid = start + (end - start)/2;

        if(arr[mid] == target) {
            return mid;
        }

        if(arr[start] <= arr[mid]) {

            if(arr[start] <= target && target <= arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }

        }else {

            if(arr[mid] <= target && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

    }

    return start;


}


int main() {


    vector<int> arr =  {3,4,5,6,7,0,1,2};

    vector<int>::iterator it;


    for(it = arr.begin(); it != arr.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it = arr.rbegin(); it != arr.rend(); it++) {
        cout << *(it) << "" ;
    }


   
    return 0;
}


