class Solution {
public:
    bool digitCount(string num) {
        int num_count[10] = {0};
        for (int index = 0; index < num.length(); ++index){
            num_count[num[index] - '0']++;
        }
        for (int index = 0; index < num.length(); ++index){
            if(num[index] - '0' != num_count[index]){
                return false;
            }
        }
        return true;
    }
};