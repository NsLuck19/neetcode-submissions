

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_map<int,int> map{};

        for (std::size_t i{}; i < nums.size(); ++i)
        {
            if (map[nums[i]] == 1)
            {
                return true;
            }

            ++map[nums[i]];
        }

        return false;
        
    }
};