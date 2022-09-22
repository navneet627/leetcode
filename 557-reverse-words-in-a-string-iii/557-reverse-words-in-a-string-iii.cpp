class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        for(j=0;j<=s.size();j++){
            if(s[j+1]==' ' || s[j+1]=='\0'){
                int m=j+1;
                while(i<j){
                    swap(s[i++],s[j--]);
                }
                j=m;
                i=m+1;
                
            }
        }
        return s;
    }
};