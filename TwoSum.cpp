class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mymap;
        

        for(int i = 0; i<nums.size(); i++){
            int remaining = target - nums[i];
            if(mymap.find(remaining) != mymap.end()){
                return {i, mymap[remaining]};
            }
            mymap[nums[i]] = i;
        }
        return {};
    }
};
