
double* duplicateArray(double* array, int size) {
    double* b = new double[size];

    for (int i=0; i<size; i++) {
        b[i] = array[i];
    }

    return b;

    delete[] b; 
}