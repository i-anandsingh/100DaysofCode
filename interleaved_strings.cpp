class solution{
public:
	int dp[105][105];
	int x, y, z;
	bool getans(string a, string b, string c, int i, int j, int k){
		if(k == z)	return true;
		if(dp[i][j] != -1)	return dp[i][j];
		int ok1 = 0, ok2 = 0;
		if(i < x){
			if(c[k] == a[i])
				ok1 = getans(a, b, c, i+1, j, k+1);
		}
		if(j < y){
			if(c[k] == b[j])
				ok2 = getans(a, b, c, i, j+1, k+1);
		}
		return dp[i][j] = ok1 or ok2;
	}
	bool interleaved(string a, string b, string c){
		x = a.size(), y = b.size(), z = c.size();
		if(z != x+y)	return false;
		memset(dp, -1, sizeof dp);
		return getans(a, b, c, 0, 0, 0);
	}
};