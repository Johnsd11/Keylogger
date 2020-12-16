all:
	mkdir data
	gcc keylogger.c keyboard.c makeLogFile.c -o keylogger.o

clean:
	rm keylogger.o 
	rm -rf data
