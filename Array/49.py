class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dt = collections.defaultdict(list)
        for z in strs:
            cnt = [0] * 26
            for i in z:
                cnt[ord(i) - ord('a')] += 1
            dt[tuple(cnt)].append(z)
        return dt.values()
