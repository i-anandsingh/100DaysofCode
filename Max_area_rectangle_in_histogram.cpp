class solution{
public:
	long long int maxArea(vector<int> &arr){
		int n = arr.size();
		stack<long long> s1;
		vector<long long> nse(n, n), pse(n, -1);
		s1.push(0);
		for(int i = 1; i < n; i++){
			while(!s1.empt() and arr[s1.top()] > arr[i]){
				nse[s1.top()] = i;
				s1.pop();
			}
			s1.push(i);
		}

		stack<long long> s2;
		s2.push(n-1);
		for(int i = n-2; i >= 0; i--){
			while(!s2.empty() and s2.top() > arr[i]){
				pse[s2.top()] = i;
				s2.pop();
 			}
 			s2.push(i);
		}
		long long ans = INT_MIN;
		for(int i = 0; i < n; i++){
			ans = max(ans, (nse[i]-pse[i]-1)*arr[i]);
		}
		return ans;
	}
};