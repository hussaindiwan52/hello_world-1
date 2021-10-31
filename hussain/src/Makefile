CC = gcc
CFLAGS =
LIB =

all: main

hussain_header:
	$(CC) $(CFLAGS) -c hussain_header.c

main:hussain_header
	$(CC) $(CFLAGS) hussain_header.o main.c -o main

run:
	.\main.exe

clean:
	rm main.exe
