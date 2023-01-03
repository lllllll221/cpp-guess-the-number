CC=g++
CFLAGS=-c -Wall
TARGET = cpp-guess-the-number


all: $(TARGET)

clean:
	rm -rf *.o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

check_functions.o: check_functions.cpp
	$(CC) $(CFLAGS) check_functions.cpp

generation_number.o: generation_number.cpp
	$(CC) $(CFLAGS) generation_number.cpp

read_input_functions.o: read_input_functions.cpp
	$(CC) $(CFLAGS) read_input_functions.cpp

search_number.o: search_number.cpp
	$(CC) $(CFLAGS) search_number.cpp

$(TARGET): main.o check_functions.o generation_number.o read_input_functions.o search_number.o
	$(CC) main.o check_functions.o generation_number.o read_input_functions.o search_number.o -o $(TARGET)