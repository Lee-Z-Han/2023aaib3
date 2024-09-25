// LeetCode 459. Repeated Substring Pattern 字串是由重複的字串組合起來
class Solution { // week03-5.cpp 學習計畫第5題
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s+s;
        int N=s2.length();
        //cout<<string::npos;
        return s2.substr(1,N-2).find(s)!=string::npos; // npos對應:沒有這個位置、很大很大
        // substr()切字串 左1 右扣1 (本來是0...N-1 現在變成 1...N-2)
    }
};