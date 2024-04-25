// Leetcode -231 Power of two

#include<limits.h>

// SOLUTION-1
/*

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;

        for (int i=0; i<=30; i++){
            if (ans == n){
                return true;
            }

            if (ans < INT_MAX/2){
                ans = ans * 2;
            }  
        }
        return false;      
    }
};

*/


//////////////////////////////////////////////////////

// SOLUTION-2
/*

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0){
            return false;
        }
        return (n & (n-1)) == 0;
    }
};

*/