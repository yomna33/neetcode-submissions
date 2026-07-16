class Solution {
public:
    void reverseString(vector<char>& s) {
        
        for(int i=0; i<s.size()/2; i++){
            char* p1 = &s[i];
            char* p2 = &s[s.size()-1-i];
            char temp = *p1;
            *p1 = *p2;
            *p2 = temp;
            
        }
       
        
    }
};