/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(n < 0) {
            N = -N;
            x = 1 / x;
        }

        double ret = 1;
        double tmp = x;
        for(long long i = N; i; i /= 2) {
            if(i % 2 == 1) {
                ret *= tmp;
            }
            tmp *= tmp;
        }
        return ret;
    }
};

