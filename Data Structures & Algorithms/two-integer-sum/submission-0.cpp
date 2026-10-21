
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> f1;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (f1.find(need) != f1.end()) {
                return {f1[need], i};
            }

            f1[nums[i]] = i;
        }

        return {};
    }
};
