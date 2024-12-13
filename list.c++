#include<iostream>
#include <vector>
#include<list>
#include<deque>

using namespace std;


int main() {

    vector<int> arr = {2,1,3,4,5,2};

    int n = arr.size();


    int index = 0;
    int minValue = INT16_MAX;

    for(int i = 0; i < n; i++) {
       if(minValue > arr[i]){
        minValue = arr[i];
         index = i;
       }
    }

    cout<< index << endl;

    arr.erase(arr.begin() + index -1);
    arr.erase(arr.begin() + index + 1);

    for(int val: arr) {
        cout << val ;
    }

   
}