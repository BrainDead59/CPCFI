//Leetcode: Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol(nums.size(),0);
        int cuenta=1;
        for(int i=0;i<nums.size();i++){
            sol[i]=cuenta;
            cuenta*=nums[i];
        }
        
        cuenta=1;
        for(int i=nums.size()-1;i>=0;i--){
            sol[i]=cuenta*sol[i];
            cuenta*=nums[i];
        }
        return sol;
    }
};

