#include <stdlib.h>
#include <stdio.h>

#define DATA_SIZE 1000

// Need a file where the logs will be stored
char* makeLogFile() {
    
    char data[DATA_SIZE];
    FILE *fPtr;

    fPtr = fopen(".ic", "w");

    if (fPtr == NULL) {
        exit(EXIT_FAILURE);
    }

    fputs("Stinky\n", fPtr);

    /* Close file to save file data */
    fclose(fPtr);

    return 0;
}

