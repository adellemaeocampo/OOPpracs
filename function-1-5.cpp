
int count_evens(int number) {
    int evenCount = 0;
    if (1 < number) {
        for(int i=1; i<=number; i++) {
            if(i % 2 == 0) {
                evenCount ++;
            }
        } 
    } else {
        return 0;
    }
    return evenCount;
}