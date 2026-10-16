class Solution {
public:
    bool isPalindrome(string s) {

        string filtered{};
        for (char c : s)
        {
            if (isalnum(c))
            {
                filtered += tolower(c);
            }
        }

        string back{filtered};
        int start{};
        int end{static_cast<int>(filtered.length() -1)};

        while (start < end)
        {
            char temp{ back[start]};
            back[start] = back[end];
            back[end] = temp;

            ++start;
            --end;
        }
        
        if (back == filtered)
        {
            return true;
        }

        return false;
    }
};
