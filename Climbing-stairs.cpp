#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3){
            return n;
        }
        int arr[n];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        
        for(int i=3; i<n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n-1];
    }
};

int main()
{
    
    return 0;
}