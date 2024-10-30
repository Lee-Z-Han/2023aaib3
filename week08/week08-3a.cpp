// week08-3a.cpp 學習計畫 matrix 第4題
// LeetCode 73. Set Matrix Zeroes
// 直覺寫出來的答案「是錯的」，因為0蔓延之後，變太多0了
// (先寫錯)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){ // 錯誤的版本(太多0互相汙染)
                    for(int ii=0;ii<M;ii++) matrix[ii][j]=0;
                    for(int jj=0;jj<N;jj++) matrix[i][jj]=0;
                }
            }
        }
    }
};