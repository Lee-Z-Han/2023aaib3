// week06-5.cpp LeetCode 1078. Occurrences After Bigram
// 找到第1個字、接著找到第2個字，再來就是我們要的第3個字
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; // 放答案(伸縮自如的陣列)，形狀要return一樣
        stringstream ss(text); // 把string轉成像cin cout的stream
        string word1,word2,word3; // 把第1、第2、第3個字
        ss>>word1; // 像cin>>word1的方法，讀到資料
        ss>>word2;
        while(ss>>word3){
            if(word1==first&&word2==second) ans.push_back(word3); // 放答案
            word1=word2;
            word2=word3;
        }
        return ans;
    }
};