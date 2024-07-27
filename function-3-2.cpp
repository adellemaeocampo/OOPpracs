
int median_array(int array[], int n) {
    
    if(n < 1 || n%2 != 0) {
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++) {
                if(array[i] > array[j]) {
                    int temp = array[i];
                    array[i] = array[j]; 
                    array[j] = temp;
                }
            }
        }

        int median = n/2;
        int medArr = array[median];
        return medArr;
        
    } else {
        return 0;
    }
}