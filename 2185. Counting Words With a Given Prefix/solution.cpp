class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int sum = 0;
        for(auto word: words){
             if(word.compare(0, pref.length(), pref) == 0)
                ++sum;
        }
        return sum;
    }
};