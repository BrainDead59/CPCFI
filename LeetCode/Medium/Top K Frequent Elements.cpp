// Leetcode: Top K Frequent Elements
class Solution {
    
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mymap;
        for(int i=0;i<nums.size();i++){
            mymap[nums[i]]++;
        }
        
        vector<vector<int>> apariciones(nums.size()+1);
        for(auto z: mymap){
            apariciones[z.second].push_back(z.first);
        }
        vector<int> solution;
        bool salida=false;
        for(int i=nums.size();i>=0;i--){
            for(int j=0;j<apariciones[i].size();j++){
                if(solution.size()==k){
                    salida = true;
                    break;
                }
                solution.push_back(apariciones[i][j]);
            }
            if(salida){
                break;
            }
        }
        return solution;
    }
};