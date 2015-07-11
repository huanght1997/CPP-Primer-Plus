.PHONY: all
all : stacker stock00 stock10 stock20
stacker: stacker.o stack.o
	g++ -o stacker stacker.o stack.o
stock00: stock00.o usestock0.o
	g++ -o stock00 stock00.o usestock0.o
stock10: stock10.o usestock1.o
	g++ -o stock10 stock10.o usestock1.o
stock20: stock20.o usestock2.o
	g++ -o stock20 stock20.o usestock2.o

stack.o: stack.cpp stack.h
	g++ -c stack.cpp
stacker.o: stacker.cpp stack.h
	g++ -c stacker.cpp
stock00.o: stock00.cpp stock00.h
	g++ -c stock00.cpp
stock10.o: stock10.cpp stock10.h
	g++ -c stock10.cpp
stock20.o: stock20.cpp stock20.h
	g++ -c stock20.cpp
usestock0.o: usestock0.cpp stock00.h
	g++ -c usestock0.cpp
usestock1.o: usestock1.cpp stock10.h
	g++ -c usestock1.cpp
usestock2.o: usestock2.cpp stock20.h
	g++ -c usestock2.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
