#include <stdio.h>
#include <string.h>

#define MAX_BUFFER_SIZE 255
#define EVENT_LEN 8


// Find the event number assigned for keyboard
char* findkeyboard() {
    const char *devices_path = "/proc/bus/input/devices";
    static char *event_line,
                event_num[EVENT_LEN];
    char line[MAX_BUFFER_SIZE];
    FILE *fp;

    fp = fopen(devices_path, "r");

    // Read through the file until the keyboard device is found or until EOF is reached
    do {
        fgets(line, MAX_BUFFER_SIZE, (FILE*)fp);
        if(strstr(line, "keyboard")) {
            break;
        }
    } while(!feof(fp));

    // Find the line stating the keyboard event number
    while(!(event_line = strstr(fgets(line, MAX_BUFFER_SIZE, (FILE*)fp), "event"))) {
        continue;
    }

    // Copy event# into a new string
    event_line = strtok(event_line, " ");
    strncpy(event_num, event_line, 10);

    fclose(fp);

    return(event_num);
}

