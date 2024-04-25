// Leetcode- 1009

// SOLUTION-1
/*
class Solution{
public:
    int bitwiseComplement(int n){
        int x = 1;
        if (n == 0){
            return 1;
        }
        while (x <= n){
            n = n ^ x;
            x = x << 1;
        }
        return n;
    }
};
*/


////////////////////////////////////////////////////////////////////


// SOLUTION-2
/*
class Solution{
public:
    int bitwiseComplement(int n){

        int ans = 0;
        int fac = 1;

        if (n==0){
            return 1;
        }

        while (n != 0){
            int bit = n%2 == 0;
            ans += fac * bit;
            fac *= 2;
            n /= 2;
        }
        return ans;
    }
};
*/


////////////////////////////////////////////////////////////////////

// SOLUTION-1

class Solution{
public:
    int bitwiseComplement(int n){
        int m = n;
        int mask = 0;

        //edge case
        if (n==0){
            return 1;
        }

        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans; 
    }
};
