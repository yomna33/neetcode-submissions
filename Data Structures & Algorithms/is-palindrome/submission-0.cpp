class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for (char c : s) {
            if (isalnum((unsigned char)c)) {
                clean += tolower((unsigned char)c);
            }
        }
        for (int i =0; i<clean.size()/2; i++){
            char* p1 = &clean[i];
            char* p2 = &clean[clean.size()-i-1];
            if(*p1 != *p2){
                return false;
            }
        }
        return true;
        
    }
};
