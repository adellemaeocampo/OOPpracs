

int max_element(int array[], int n) {
    int max = array[0]; 
    if(1 < n) {
        for(int i=0; i<n; i++) {
            if(max<array[i]) {
                max = array[i];
            }
        }
    } else {
        return 0;
    }
    return max;
}