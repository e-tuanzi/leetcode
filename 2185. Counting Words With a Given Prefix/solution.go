func prefixCount(words []string, pref string) int {
    var sum = 0
    for _, word := range words{
        if strings.HasPrefix(word, pref){
            sum++
        }
    }
    return sum
}