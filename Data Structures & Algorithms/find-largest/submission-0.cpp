#include <iostream>
using namespace std;

int findLargest(vector<int>& nums){
    int n = nums.size();
    int max = nums[0];

    for(int i=1;i<n;i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }

    return max;
}

int main(){
    return 0;
}