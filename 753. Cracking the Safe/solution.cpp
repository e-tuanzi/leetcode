class Solution {
private:
    string ans;
    unordered_set<int> seen;
    int boundary;
public:
    void dfs(int key, int bound){
        for(int num = 0; num < bound; ++num){
            int next_key = key *10 + num;
            if(!seen.count(next_key)){
                seen.insert(next_key);
                dfs(next_key % boundary, bound);
                ans += (num + '0');
            }
        }
    }
    string crackSafe(int n, int k) {
        this->boundary = pow(10, n-1); 
        dfs(0, k);
        ans += string(n-1, '0');
        return ans;
    }
};