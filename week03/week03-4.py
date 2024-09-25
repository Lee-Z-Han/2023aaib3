# LeetCode 28. Find the Index of the First Occurrence in a String
# 學習計畫第3題 Easy 在一堆草堆裡 haystack,找到一支針needle
# 在Python只要一行 a.find(b) 在 字串a 裡找到 字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)