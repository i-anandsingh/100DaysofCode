class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int qu[])
    {
        // code here
        for(int i = 1; i < n; i++){
            arr[i] += arr[i-1];
        }
        // for(int i = 0; i < n; i++)
        //     cout<<arr[i]<<" ";
        vector<int> ans(q);
        int k = 0;
        int m = q*2;
        for(int i = 0; i < m;){
            // cout<<arr[qu[i]]<<endl;
            ans[k] =  (arr[qu[i+1]-1] - ((qu[i]-1) <= 0 ? 0 : arr[qu[i]-2])); 
            i += 2;
            k++;
        }
        return ans;
    }
};