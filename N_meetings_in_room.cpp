struct comp{
    bool operator()(pair<int, int> v1, pair<int, int> v2){
        return v1.second < v2.second;
    }
};
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int >> v(n);
        for(int i = 0; i < n; i++){
            v[i] = {start[i], end[i]};
        }
        sort(v.begin(), v.end(), comp());
        int prev = v[0].second;
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(v[i].first > prev){
                cnt++;
                prev = v[i].second;
            }
        }
        return cnt;
    }
};