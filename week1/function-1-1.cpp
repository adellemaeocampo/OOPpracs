
int array_sum(int array[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++){
        if(n > 0){
            sum += array[i];
        } else {
            return 0;
        }
    }
    return sum;
}