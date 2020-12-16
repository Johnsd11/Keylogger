all:
	gcc keylogger.c keyboard.c -o keylogger.o

clean:
	rm keylogger.o
