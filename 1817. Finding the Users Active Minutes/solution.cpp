class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> users_op_history;
        for(auto log: logs){
            users_op_history[log[0]].emplace(log[1]);
        }
        vector<int> ans(k);
        for(auto [user, minutes]: users_op_history){
            ans[minutes.size() - 1]++;
        }
        return ans;
    }
};