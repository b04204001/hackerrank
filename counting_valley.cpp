
int countingValleys(int steps, string path) {
    int num_valley = 0;
    int level = 0;
    for(char step : path){
        if(step == 'U'){
            level++;
            if(level == 0) num_valley++;
        }
        else{
            level--;
        }
    }
    return num_valley;
}
