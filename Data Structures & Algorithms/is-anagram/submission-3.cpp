class Solution {
public:
    bool isAnagram(string s, string t) {


        std::map<char, int> s_map;
        std::map<char, int> t_map;
        
        if (t.size() != s.size())
        {
            return false;
        }

        for (size_t i{}; i < s.size(); ++i)
        {

            s_map.insert({s[i], 1});

            if (s_map.find(s[i]) != s_map.end())
            {
                ++s_map[s[i]];
            }

            t_map.insert({t[i], 1});

            if (t_map.find(t[i]) != t_map.end())
            {
                ++t_map[t[i]];

            }
            
        }

        return s_map == t_map;




        


    }
};
