vector<int> freqQuery(vector<vector<int>> queries) {
    vector<int> freq;
    unordered_map<int,int> mp;
    unordered_map<int, int> freq_mp;
    for(auto q : queries){
        if(q[0] == 1){
            if(freq_mp[mp[q[1]]] > 0) freq_mp[mp[q[1]]]--;
            mp[q[1]]++;
            freq_mp[mp[q[1]]]++;
        }
        else if (q[0] == 2){
            if(mp.count(q[1])  && mp[q[1]] > 0){
                if(freq_mp[mp[q[1]]] > 0) freq_mp[mp[q[1]]]--;
                mp[q[1]]--;
                
                if(mp[q[1]] > 0) {
                    freq_mp[mp[q[1]]]++;
                }
            }
        }
        else if (q[0]==3){
            if(freq_mp[q[1]] > 0){
                freq.push_back(1);
            }
            else{
                freq.push_back(0);
            }
        }
    }
    return freq;

}
