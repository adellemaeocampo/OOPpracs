
double array_mean(int array[], int n){
    double sum = 0;
    double average = 0;
    for (int i=0; i<n; i++) {
        if (n > 1){
            sum += array[i];
            average = sum/n;
        } else {
            return 0.0;
        }
    }
    return average; 
}