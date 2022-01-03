all: bin/run

bin/run: bin/Client.o bin/clients.o
	g++ bin/Client.o bin/clients.o -o bin/run

bin/Client.o: src/Client.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/Client.o src/Client.cpp

bin/clients.o: src/clients.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/clients.o src/clients.cpp

	@echo success

clean:
	rm bin/Client.o bin/clients.o  bin/run
