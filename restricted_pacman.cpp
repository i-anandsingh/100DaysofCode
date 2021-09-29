// problem :- https://practice.geeksforgeeks.org/problems/2caf0501a39567d653197364a2b5c8a9f5943b7e/1#

class Solution{
    public:
    int candies(int m, int n) 
    { 
    	// Your code goes here
    	vector<int> dp(n*m+1, 0);
    	if(m > n)
    	    swap(m,n);
    	
    	dp[0] = 1;
    	dp[m] = 1;
    	for(int i = m+m; i <= m*n; i += m){
    	    dp[i] = 1;
    	}
    	
    	for(int i = 1; i <= m*n; i++){
    	    if(i-n < 0 or dp[i] > 0)    continue;
    	    dp[i] = dp[i-n];
    	}
    	int cnt = 0;
    	for(int i = 1; i <= m*n; i++){
    	    if(dp[i] == 0)  cnt++;
    	}
    	return cnt;
    } 
};