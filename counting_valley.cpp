
int countingValleys(int steps, string path) {
    int num_valley = 0;
    int level = 0;
    for(char step : path){
        if(step == 'U'){
            level++;
            //只有從山谷下回到海平面才是走出山谷
            if(level == 0) num_valley++;
        }
        else{
            level--;
        }
    }
    return num_valley;
}
