class Solution {
    public int prefixCount(String[] words, String pref) {
        int sum = 0;
        for(String word: words){
            if(word.startsWith(pref)){
                ++sum;
            }
        }
        return sum;
    }
}