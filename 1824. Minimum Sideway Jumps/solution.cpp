class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int dp[3] = {1, 0, 1};
        for(auto obs: obstacles){
            for(int j = 0; j < 3; ++j){
                if(obs - 1 == j){
                    dp[j] = INT_MAX;
                    break;
                }
            }
            int x = min({dp[0], dp[1], dp[2]}) + 1;
            for(int j = 0; j < 3; ++j){
                if(obs - 1 != j){
                    dp[j] = min(dp[j], x);
                }
            }
        }
        return min({dp[0], dp[1], dp[2]});
    }
};