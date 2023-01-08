int prefixCount(char ** words, int wordsSize, char * pref){
    int sum = 0;
    int len = strlen(pref);
    for (int id = 0; id < wordsSize;++id){
        if(strncmp(words[id], pref, len) == 0){
            ++sum;
        }
    }
    return sum;
}