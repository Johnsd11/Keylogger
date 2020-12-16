#include <stdio.h>
#include "keyboard.h"
#include "makeLogFile.h"

int main() {
    printf("Keyboard event: %s\n", findkeyboard());
    makeLogFile();
}
