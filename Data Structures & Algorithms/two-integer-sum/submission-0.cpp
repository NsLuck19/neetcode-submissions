
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> hash;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            int diff{target - nums[i]};

            if (hash.find(nums[i]) != hash.end())
            {
               return { hash[nums[i]] , static_cast<int>(i)};
            }

            hash.insert({diff, i});
        }
        
    }
};
