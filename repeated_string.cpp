long repeatedString(string s, long n) {
    long m = s.length();
    long cnt = 0;
    long remain = 0;
    for(int i = 0;i<m;i++){
        if(s[i] == 'a' ) {
            cnt++;
            if(i < (n % m)) remain++;
        }
    }
    return (n/m)*cnt + remain;
}
