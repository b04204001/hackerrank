int jumpingOnClouds(vector<int> c) {
    int n = c.size();
    vector<int> dp(n,0);
    for(int i=1;i<n;i++){
        if(c[i] == 0){
            dp[i] = min(dp[i-1] +1 , dp[i-2] + 1);
        }
        else{
            dp[i] = n;
        }
        
    }
    return dp[n-1];
}
