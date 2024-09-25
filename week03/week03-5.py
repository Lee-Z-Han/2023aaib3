# week03-5.py 學習計畫第5題
# LeetCode 459. Repeated Substring Pattern
# 這題的題目有點難,所以我把之前有偷看過解答再寫
# 原則是:如s是由許多小成分重複組成的話,那兩個字s+s接起來,也一定是重複的
# 更巧的是,如果頭尾各減掉一個字母,因為有重複的部分在中間,所以還是找的到s在裡面
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2=s+s # 把字串 s+s 變2倍長度
        s2=s2[1:len(s2)-1] # 左少1,右少1
        # print(s2)
        if s in s2: return True
        else:return False