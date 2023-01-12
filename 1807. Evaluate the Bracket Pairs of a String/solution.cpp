class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans;
        unordered_map<string, string> dict;
        for(auto kv: knowledge){
            dict[kv[0]] = kv[1];
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '(' && s[i] != ')'){
                ans += s[i];
            }
            else if(s[i] == '('){
                int j = s.find(')', i+1);
                auto key = s.substr(i+1, j-i-1);
                i = j;
                if(dict.count(key) > 0){
                    ans += dict[key];
                }else{
                    ans += '?';
                }
            }
        }
        return ans;
    }
};