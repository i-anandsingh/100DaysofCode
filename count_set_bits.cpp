class Solution{
    public:
    // n: input to count the number of set bits from [1, n]
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int ans = 0;
        for(int i = 0; i < 31; i++){
            //number of 1's in a cycle * how many cycles are there
            int units = (1<<i)*((n+1)/(1<<(i+1)));
            //if there were any left out 1's
            int rem = max(0, (n+1)%(1<<(i+1)) - (1<<i));
            ans += (units+rem);
        }
        return ans;
    }
};