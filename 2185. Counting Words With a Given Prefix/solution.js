/**
 * @param {string[]} words
 * @param {string} pref
 * @return {number}
 */
var prefixCount = function(words, pref) {
    let sum = 0;
    for (const word of words){
        if(word.startsWith(pref)){
            ++sum;
        }
    }
    return sum;
};