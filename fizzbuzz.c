#include <stdio.h>
#include <stdlib.h> 

// First index of 'argv' is the actual program name
// Order of the inputs: #ofDigits, firstNum, secondNum

int main( int argc, char *argv[]  ) {
    
    int size, fNum, sNum;
    int modfNum, modsNum; // Modulus first/second number

    if(argc != 4) {
        printf("Improper input.\n ");
        return 0;
    }
    
    size = atoi(argv[1]);
    fNum = atoi(argv[2]);
    sNum = atoi(argv[3]);
    

    // Fizz buzz starts at one not zero
    int curNum;
    for(curNum = 1; curNum <= size; curNum++) {

        modfNum = curNum % fNum;
        modsNum = curNum % sNum;

        if(modfNum == 0 && modsNum == 0) {
            printf("FizzBuzz\n");
        } else if(modfNum == 0 && modsNum != 0) {
            printf("Fizz\n");
        } else if(modsNum == 0 && modfNum != 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", curNum);
        }
    }

    return 0;
}
