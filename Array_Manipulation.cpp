long arrayManipulation(int n, vector<vector<int>> queries) {
    // O(m) 當成上下車，start +上數值，q[1]不減一是因為，調整到q[1]-1，所以q[1]操作-
    vector<int> diff(n,0); 
    for(auto q : queries){
        int start = q[0] - 1; //對齊0~n-1
        int end = q[1] ; //因為q[1]-1仍受影響，放在q[1]去扣
        int amount = q[2];
        
        diff[start] += amount;
        diff[end] -= amount;
    }
    
    long current_sum = 0;
    long max_val = 0;
    for(int i=0;i<n;i++){
        current_sum += diff[i];
        if(current_sum > max_val){
            max_val = current_sum;
        }
    }
    
    return max_val;
}
