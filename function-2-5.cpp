
bool is_descending(int array[], int n) {

    if(n > 0) {
        for(int i=0; i<n; i++) {
            if(array[i] >= array[i+1]) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }
}