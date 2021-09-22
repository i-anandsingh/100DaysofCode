class solution{
    public:
        //solution 1
        int repeatedStirng(string a, string b){
            int cnt = b.size()/a.size() + 2;
            string s = "";
            for(int i = 1; i <= cnt; i++){
                s += a;
                if(s.find(b) != string::npos)
                    return i;
            }
            return -1;
        }
        
        //solution 2
        bool isSubstring(string a, string b){
            for(int i = 0; i <= a.size()-b.size(); i++){
                int counter = 0;
                for(int j = 0; j < b.size(); j++){
                    if(a[i+j] == b[j]){
                        counter++;
                        if(counter == b.size()){
                            return 1;
                        }
                    }
                }
            }
            return 0;
        }

        int repeatedStirng(string a, string b){
            int cnt = ceil((float)b.size()/(float)a.size());
            string s = "";
            for(int i = 0; i < cnt; i++)
                s += a;
            if(isSustring(s, b))    return cnt;
            s += a;
            if(isSustring(s, b))    return cnt+1;
            return -1;
        }
};