
double arrayMin(double* array, int size) {
    int *ptr, min;
    min = array[0];
    ptr = &min;

    for(int i=0; i<size; i++) {
        if(array[i] > array[i+1]){
            min = array[i+1];
        }
    }

    return min; 
}