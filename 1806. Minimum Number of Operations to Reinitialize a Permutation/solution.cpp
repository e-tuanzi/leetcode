class Solution {
public:
    void show_vec(std::vector<int> vec, int n){
        for (int i = 0; i < n; i++){
            std::cout<<vec[i]<<", ";
        }
        std::cout<<std::endl;
    }

    int compare(std::vector<int> vec, std::vector<int> arr, int n){
        for (int i = 0; i < n; i++){
            if(vec[i] != arr[i]){
                return -1;
            }
        }
        return 0;
    }

    void compute_arr(std::vector<int> &vec, int n) {
        std::vector<int> arr;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr.push_back(vec[i / 2]);
            } else {
                arr.push_back(vec[n / 2 + (i - 1) / 2]);
            }
        }
        for (int i = 0; i < n; i++){
            vec[i] = arr[i];
        }
        // show_vec(arr, n);
        return;
    }

    int reinitializePermutation(int n) {
        std::vector<int> perm;
        std::vector<int> temp;
        for (int i = 0; i < n; i++){
            perm.push_back(i);
            temp.push_back(i);
        }
        // show_vec(perm, n);
        int count = 1;
        for(;;){
            // std::cout<<count<<" step"<<std::endl;
            compute_arr(temp, n);
            if(compare(perm, temp, n) == 0){
                break;
            }
            count++;
        }
        return count;
    }
};