bool isVowel(char c){
if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            return true;
        }
        return false;
}

class Solution {
public:
    int maxVowels(string s, int k) {
        int mx = 0, cnt =0;
        int i=0;
        while(i<k) {
            if(isVowel(s[i])) {
                cnt++;
            }
            i++;
        }
        mx = max(cnt, mx);
        for(; i<s.size(); i++){
            if(isVowel(s[i-k])) {
                cnt--;
            }
            if(isVowel(s[i])){
                cnt++;
            }
            mx = max(cnt, mx);
        }
        return mx;
    }

};
