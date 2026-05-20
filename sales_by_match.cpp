int sockMerchant(int n, vector<int> ar) {
    int cnt = 0;
    int count[101];
    for(int sock : ar){
        count[sock]++;
        if(count[sock] > 0 && count[sock] % 2 == 0 ) cnt++;
    }
    return cnt;
}
