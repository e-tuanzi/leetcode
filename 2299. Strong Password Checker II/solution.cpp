class Solution {
public:
    bool is_number(char ch){
        if(ch >= '0' && ch <= '9'){
            return true;
        }
        return false;
    }
    bool is_uper_letter(char ch){
        if(ch >= 'A' &&  ch <= 'Z'){
            return true;
        }
        return false;
    }
    bool is_lower_letter(char ch){
        if(ch >= 'a' &&  ch <= 'z'){
            return true;
        }
        return false;
    }
    bool is_special_char(char ch){
        string str = "!@#$%^&*()-+";
        for(auto std_ch: str){
            if(std_ch == ch)
                return true;
        }
        return false;
    }
    bool is_incontinue(char last_ch, char ch){
        if(last_ch == ch){
            return false;
        }
        return true;
    }
    bool strongPasswordCheckerII(string password) {
        if(password.length() < 8){
            return false;
        }
        bool flag[4] = {false};
        char last_ch = '\0';
        for(auto ch:password){
            if(!flag[0])
                flag[0] = is_number(ch);
            if(!flag[1])
                flag[1] = is_lower_letter(ch);
            if(!flag[2])
                flag[2] = is_uper_letter(ch);
            if(!flag[3])
                flag[3] = is_special_char(ch);
            if(!is_incontinue(last_ch, ch))
                return false;
            last_ch = ch;
        }
        return flag[0] && flag[1] && flag[2] && flag[3];
    }
};