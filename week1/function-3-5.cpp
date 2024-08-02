
double sum_even(double array[], int n) {
    
    double sum = 0.0;
    if (n > 1) {
        for (int i=0; i<n; i=i+2){
            sum += array[i];  
        }
    } else { 
        return 0;
    }
    return sum;
}