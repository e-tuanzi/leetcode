class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        sum = 0
        for word in words:
            if word.startswith(pref):
                sum += 1
        return sum