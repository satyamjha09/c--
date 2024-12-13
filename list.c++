#include<iostream>
#include <vector>
#include<list>
#include<deque>

using namespace std;


int main() {

    vector<int> arr = {2,1,3,4,5,2};

    int n = arr.size() -1;
    int minNumber = 100;
    for(int i = 0; i <= n; i++) {
        minNumber = min(minNumber , arr[i]);
    }

    int ans = 0;

    if(arr.at(7)) {
        cout << true << endl;
    } else {
        cout <<"index is not present " << false << endl;
    }

    cout << arr.at(ans);

    cout << minNumber <<" ";

    return 0;
}