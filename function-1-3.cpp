#include <stdio.h>

void count_digits(int array[4][4]) {
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixs = 0;
    int sevens = 0;
    int eights = 0;
    int nines = 0;

    for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            switch(array[i][j]){
                case 0:
                    zeros++;
                    break;
                case 1:
                    ones++;
                    break;
                case 2:
                    twos++;
                    break;
                case 3:
                    threes++;
                    break;
                case 4:
                    fours++;
                    break;
                case 5:
                    fives++;
                    break;
                case 6:
                    sixs++;
                    break;
                case 7:
                    sevens++;
                    break;
                case 8:
                    eights++;
                    break;
                case 9:
                    nines++;
                    break;
                default:
                    break;
            }
        }
    }
    printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d;", zeros, ones, twos, threes, fours, fives, sixs, sevens, eights, nines);
}