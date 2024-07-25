
int num_count(int array[], int n, int number) {
    int count = 0; 
    if(1<n) {
        for(int i=0; i<n; i++){
            if(array[i] == number){
                count++;
            }
        }
    } else {
        return 0;
    }
    return count;
}