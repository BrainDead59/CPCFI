//Leetcode: Two Sum 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mymap;
        vector<int> z;
        for(int i=0;i<nums.size();i++){
            int valor=target-nums[i];
            if(mymap.find(valor) != mymap.end()){
                z.push_back(mymap[valor]);
                z.push_back(i);
                break;
            }else{
                mymap[nums[i]]=i;
            }
        }
        return z;
    }
};