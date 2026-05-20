int sherlockAndAnagrams(string s) {
    unordered_map<string,int> mp;
    int n = s.length();
    int total = 0;
    for(int i =0;i<n;i++){
        for(int len = 1;i + len <=n;len++){
            string sub = s.substr(i,len);
            sort(sub.begin(),sub.end());
            mp[sub]++;
        }
    }
    for(auto pair : mp){
        int cnt = pair.second;
        total += (cnt) * (cnt -1) / 2; 
    }   
    return total;
}
