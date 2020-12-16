#include <stdlib.h>
#include <stdio.h>

#define DATA_SIZE 1000


char* makeLogFile(){
    //Need a file where the logs will be stored

    char data[DATA_SIZE];

    FILE *fPtr;

    fPtr = fopen("data/file1.txt", "w");

    if (fPtr == NULL){
        printf("file not able to be created. \n");
        exit(EXIT_FAILURE);
    }

    /* Input contents from user to store in file */
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);


    /* Write data to file */
    fputs(data, fPtr);


    /* Close file to save file data */
    fclose(fPtr);


    /* Success message */
    printf("File created and saved successfully. :) \n");


    return 0;
}
