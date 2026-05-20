string twoStrings(string s1, string s2) {
    unordered_map<char, int> mp;
    for(char c : s1){
        mp[c]++;   
    }
    for(char c : s2){
        if(mp[c]>0){
            return "YES";
        }
    }
    
    return "NO";
}
