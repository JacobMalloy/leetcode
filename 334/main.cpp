#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first;
        int second;
        int alt_first;

        first = second = alt_first = nums[0];
        for(int i =1;i<nums.size();i++){
            if(first == second){
                if(nums[i]>first){
                    second = nums[i];
                }else{
                    first = second = alt_first = nums[i];
                }
                continue;
            }
            if(nums[i]>second){
                return true;
            }
            if(nums[i]<alt_first){
                alt_first=nums[i];
                continue;
            }
            if(nums[i]<second && nums[i]>alt_first){
                first=alt_first;
                second=nums[i];
            }
        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int> nums = {5,1,5,5,2,5,4};
    cout << s.increasingTriplet(nums)<<endl;
}
