class solution{
public:
	int maxdiffere(string s){
		int t = -1, ans = -1;
		for(int i = 0; i < s.size(); i++){
			t = max(t+a, a);
			ans = max(ans, t);
		}
		return ans;
	}
};