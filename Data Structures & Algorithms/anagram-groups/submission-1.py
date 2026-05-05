class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_lists = {}

        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - 97] += 1

            x = tuple(count)
            if x in anagram_lists:
                anagram_lists[x].append(s)
            else:
                anagram_lists[x] = [s]
        
        return [x for x in anagram_lists.values()]