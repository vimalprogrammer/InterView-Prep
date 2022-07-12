class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        string d="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                d+=s[i];
        }
        string h=d;
        reverse(d.begin(),d.end());
        return h==d;
    }
};