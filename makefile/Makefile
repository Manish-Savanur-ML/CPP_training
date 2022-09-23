output: main.o message.o
	g++ main.cc message.cc -o output

main.o: main.cc
	g++ -c main.cc

message.o: message.cc
	g++ -c message.cc

clean:
	rm -rf *.o output
