int Kthelement(vector<int> a, vector<int> b, int n, int m, int k){
	int i = 0, j = 0;
	while(i < n and j < m){
		if(a[i] <= b[j]){
			i++, k--;
			if(k == 0)
				return a[i-1];
		} else{
			j++, k--;
			if(k == 0)
				return b[j-1];
		}
	}

	while(i < n){
		k--, i++;
		if(k == 0)
			return a[i-1];
	}
	while(j < m){
		k--, j++;
		if(k == 0)
			return b[j-1];
	}
}