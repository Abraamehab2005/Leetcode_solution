class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();

        bool small = false;
        bool big = false;

        for (int i=1; i<n; i++)
        {
            if (word[0]>='a' && word[0]<='z')
            {
                if (word[i]>='a' && word[i]<='z')
                {
                    small = true;
                }
                else
                {
                    return false;
                }
            }

            if (word[0]>='A' && word[0]<='Z')
            {
                if (word[i]>='A' && word[i]<='Z')
                {
                    big = true;
                }
                else
                {
                    small = true;
                }
            }
        }

        if (small && big)
        {
            return false;
        }

        return true;
        
    }
};