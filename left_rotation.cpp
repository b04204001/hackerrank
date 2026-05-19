vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rot_arr(n,0);
    d = d % n;
    for(int i = 0;i<n;i++){
        rot_arr[i] = arr[(i + d) % n];
    }
    return rot_arr;
}

//最佳解
void rotateLeft(int d, vector<int>& arr) {
    d %= arr.size();
    std::rotate(arr.begin(), arr.begin() + d, arr.end());
}
