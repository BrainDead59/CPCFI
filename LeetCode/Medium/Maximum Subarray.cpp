class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mayor=-10e5, suma=0;
        for(int i=0;i<nums.size();i++){
            suma = max(nums[i],suma+nums[i]);
            mayor = max(mayor,suma);
        }
        return mayor;
    }
};