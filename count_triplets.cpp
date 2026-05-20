//固定中間找兩邊。
long countTriplets(vector<long> arr, long r) {
    unordered_map<long, long> right_mp;
    unordered_map<long, long> left_mp;
    for(long a : arr){
        right_mp[a]++;
    }
    long total = 0;
    for(long y : arr){
        right_mp[y]--;
        
        if( y % r == 0){
            long long x = y / r; 
            long long z = y * r;
            if(left_mp.count(x) && right_mp.count(z)){
                total += left_mp[x] * right_mp[z];
            }
        }
        left_mp[y]++;
    }
    return total;

}
