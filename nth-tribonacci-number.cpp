#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        int t1 = 0, t2 = 1, t3 = 1, t = 0;
        if(n == 0){
            return t1;
        }
        if(n == 1){
            return t2;
        }
        if(n == 2){
            return t3;
        }
        for(int i=3; i<=n; i++){
            t = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = t;
        }
        return t;
    }
};

int main()
{
    
    return 0;
}