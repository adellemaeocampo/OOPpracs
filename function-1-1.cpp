
double arrayMin(double* array, int size) {
    int min = array[0];

    for(int i=0; i<size; i++) {
        if(array[i] > array[i+1]){
            min = array[i+1];
        }
    }

    return min; 
}