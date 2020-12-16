#include <stdio.h>
#include "keyboard.h"
#include "makeLogFile.h"
#include "readInput.h"

int main() {
    char *event = findkeyboard();

    printf("Keyboard event: %s\n", event);
    makeLogFile();
    read_input(event);
}
