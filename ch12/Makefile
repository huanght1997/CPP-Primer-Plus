CXX = g++
.PHONY: all
all : bank placenew1 placenew2 sayings1 sayings2 vegnews
bank: bank.o queue.o
	$(CXX) -o bank bank.o queue.o
placenew1: placenew1.o
	$(CXX) -o placenew1 placenew1.o
placenew2: placenew2.o
	$(CXX) -o placenew2 placenew2.o
sayings1: sayings1.o string1.o
	$(CXX) -o sayings1 sayings1.o string1.o
sayings2: sayings2.o string1.o
	$(CXX) -o sayings2 sayings2.o string1.o
vegnews: vegnews.o strngbad.o
	$(CXX) -o vegnews vegnews.o strngbad.o


bank.o: bank.cpp
	$(CXX) -c bank.cpp
placenew1.o: placenew1.cpp
	$(CXX) -c placenew1.cpp
placenew2.o: placenew2.cpp
	$(CXX) -c placenew2.cpp
queue.o: queue.cpp
	$(CXX) -c queue.cpp
sayings1.o: sayings1.cpp
	$(CXX) -c sayings1.cpp
sayings2.o: sayings2.cpp
	$(CXX) -c sayings2.cpp
string1.o: string1.cpp
	$(CXX) -c string1.cpp
strngbad.o: strngbad.cpp
	$(CXX) -c strngbad.cpp
vegnews.o: vegnews.cpp
	$(CXX) -c vegnews.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
