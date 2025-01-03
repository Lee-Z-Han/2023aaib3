// week13-3.cpp 使用LeetCode 的 Playground 遊樂場 寫程式
// LeetCode 把 #include <iostream>和using namespace std;都寫好了
// 右上角，有 stdin 可輸入資料 輸入
int main() {
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a); //把 數字a 放入 陣列A
        B.push_back(b); //把 數字b 放入 陣列B
    } //目標:把 A 從小到大排好
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){
        //cout<<A[i]<<" "; //印出來，真的是「小到大排好」
        ans+=abs(A[i]-B[i]); //相減，只取正的
    }
    cout<<"加起來的答案是"<<ans;
}