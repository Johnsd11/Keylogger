all:
	gcc keylogger.c keyboard.c makeLogFile.c readInput.c -o keylogger.o

clean:
	rm keylogger.o 
