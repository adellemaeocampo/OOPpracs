
int min_element(int array[], int n) {
    int min = array[0];
    if(1 < n) {
        for(int i=0; i<n; i++){
            if(min > array[i]) {
                min = array[i];
            } 
        }
    } else {
        return 0;
    }
    return min;
}