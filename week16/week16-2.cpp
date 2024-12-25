// week16-2.cpp 學習計畫 Math 最後1題
// LeetCode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x,long long int n) {
        double ans=1;
        if(n==0) return 1; // 1*x *x *x *x 
        if(n<0) //遇到負的n，那就負負得正，同時把x變成分母
        {
            n=-n;
            x=1/x; //因為x的-1次方，是1/x
        }
        if(n%2==0)
        {
            double now = myPow(x,n/2); // 一半的x相乘
            return now*now; //左一半、右一半，再相乘
        }else
        {
            double now = myPow(x,n/2);
            return now*now*x;
        }
    }
};