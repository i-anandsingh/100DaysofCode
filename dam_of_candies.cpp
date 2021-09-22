class Solution{
    
    public:
    int maxCandy(int h[], int n) 
    { 
        // Your code goes here
        if(n == 1)
            return 0;
        int ans = -1;
        for(int i = 0, j = n-1; i < n and j >= 0;){
            if(h[i] < h[j]){
                ans = max(ans, h[i]*(j-i-1));
                i++;
            } else{
                ans = max(ans, h[j]*(j-i-1));
                j--;
            }
        }
        return ans;
    }   
};