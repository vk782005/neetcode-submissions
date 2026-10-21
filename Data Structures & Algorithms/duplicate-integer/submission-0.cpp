class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>f1;
        for(int i=0;i<nums.size();i++){
            if(f1.find(nums[i])!=f1.end()){return true;}
            f1[nums[i]]++;
        }
        return false;
    }
};