void minimumBribes(vector<int> q) {
    int cnt = 0;
    for(int i = 0;i<q.size();i++){
        // 超過本該在這兩格以上
        if(q[i] - (i + 1) > 2){
            printf("Too chaotic \n");
            return ;
        }
        //大於三個都被跳過，從前兩格看i移了幾次(前兩個幾個比他大)
        for(int j = max(0,q[i]-2);j<i;j++){
            if(q[j] > q[i]){
                cnt++;
            }
        }

    }
    printf("%d\n", cnt);
}
