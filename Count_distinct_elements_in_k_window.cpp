class solution{
public:
	vector<int> countDistinct(vector<int> arr, int n){
		vector<int> ans(n-k+1);
		int x = 0;
		unordered_map<int, int> m;
		for(int i = 0; i < k; i++){
			m[arr[i]]++;
		}
		ans[x++] = m.size();
		int i = 0, j = k;
		while(j < n){
			m[arr[j++]]++;
			m[arr[i]]--;
			if(m[arr[i]] == 0)
				m.erase(arr[i]);
			i++;
			ans[x++] = m.size();
		}
		return ans;
	}
};