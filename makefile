all: bin/run

bin/run: bin/Client.o
	g++ bin/Client.o -o bin/run

bin/Client.o: src/Client.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Client.o src/Client.cpp

	@echo success

clean:
	rm bin/Client.o  bin/run
