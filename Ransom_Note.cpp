void checkMagazine(vector<string> magazine, vector<string> note) {
    int m = magazine.size();
    int n = note.size();
    unordered_map<string,int> mp;
    for(auto mag : magazine){
        mp[mag]++;
    }
    for(auto no : note){
        if(mp[no]> 0){
            mp[no]--;
        }
        else{
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}
