
bool is_fanarray(int array[], int n) {

    if(n > 1) {
        for(int i=0; i<n/2; i++) {
            if(array[i] == array[n-i-1]) {
                return true;
            } else {
                return false;
                }
        }
    } else {
        return false;
    }
}