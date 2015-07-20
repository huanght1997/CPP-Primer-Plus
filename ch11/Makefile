CXX = g++
.PHONY: all
all : randwalk stone stone1 usetime0 usetime1 usetime2 usetime3
randwalk: randwalk.o
randwalk: randwalk.o vect.o
	$(CXX) -o randwalk randwalk.o vect.o
stone: stone.o
stone: stone.o stonewt.o
	$(CXX) -o stone stone.o stonewt.o
stone1: stone1.o
stone1: stone1.o stonewt1.o
	$(CXX) -o stone1 stone1.o stonewt1.o
usetime0: usetime0.o
usetime0: usetime0.o mytime0.o
	$(CXX) -o usetime0 usetime0.o mytime0.o
usetime1: usetime1.o
usetime1: usetime1.o mytime1.o
	$(CXX) -o usetime1 usetime1.o mytime1.o
usetime2: usetime2.o
usetime2: usetime2.o mytime2.o
	$(CXX) -o usetime2 usetime2.o mytime2.o
usetime3: usetime3.o
usetime3: usetime3.o mytime3.o
	$(CXX) -o usetime3 usetime3.o mytime3.o


mytime0.o: mytime0.cpp
	$(CXX) -c mytime0.cpp
mytime1.o: mytime1.cpp
	$(CXX) -c mytime1.cpp
mytime2.o: mytime2.cpp
	$(CXX) -c mytime2.cpp
mytime3.o: mytime3.cpp
	$(CXX) -c mytime3.cpp
randwalk.o: randwalk.cpp
	$(CXX) -c randwalk.cpp
stone1.o: stone1.cpp
	$(CXX) -c stone1.cpp
stone.o: stone.cpp
	$(CXX) -c stone.cpp
stonewt1.o: stonewt1.cpp
	$(CXX) -c stonewt1.cpp
stonewt.o: stonewt.cpp
	$(CXX) -c stonewt.cpp
usetime0.o: usetime0.cpp
	$(CXX) -c usetime0.cpp
usetime1.o: usetime1.cpp
	$(CXX) -c usetime1.cpp
usetime2.o: usetime2.cpp
	$(CXX) -c usetime2.cpp
usetime3.o: usetime3.cpp
	$(CXX) -c usetime3.cpp
vect.o: vect.cpp
	$(CXX) -c vect.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
