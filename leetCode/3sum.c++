
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {

    int n = nums.size();
    vector<vector<int>> ans;


    for(int i = 0; i < n; i++) {
        int k = n - 1;
        int j = i + 1;

        if(i > 0 && nums[i] == nums[i-1]) continue;

        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if(sum > 0) {
                j++;
            } else if(sum < 0) {
                k--;
            } else {
                ans.push_back({nums[i], nums[j] , nums[k]});

                while(j < k && nums[j] == nums[j-1]) j++;
            }
        }
    }

    return ans;



}


int main() {

    
    return 0;
}