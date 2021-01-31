all: main.o vector_code.o
	g++ main.o vector_code.o -o run_this
main.o: main.cpp vectortests.h
	g++ -c main.cpp
vector_code.o: vector_code.cpp vectortests.h
	g++ -c vector_code.cpp
clean:
	rm *.o
	rm run_this
