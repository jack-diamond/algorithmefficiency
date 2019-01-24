all: main

clean:
	-rm main
main:
	g++ -o main main.cpp bubbleSort.cpp quickSort.cpp radixSort.cpp 
