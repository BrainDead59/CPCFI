// Leetcode: ContainsDuplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mymap;
        for (int i=0;i<nums.size();++i){
            mymap[nums[i]]+=1;
            if(mymap[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};