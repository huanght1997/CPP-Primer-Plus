CXX = g++
.PHONY: all
all : usebrass1 usebrass2 usebrass3 usedma usett0 usett1
usebrass1: usebrass1.o brass.o
	$(CXX) -o usebrass1 usebrass1.o brass.o
usebrass2: usebrass2.o brass.o
	$(CXX) -o usebrass2 usebrass2.o brass.o
usebrass3: usebrass3.o acctabc.o
	$(CXX) -o usebrass3 usebrass3.o acctabc.o
usedma: usedma.o dma.o
	$(CXX) -o usedma usedma.o dma.o
usett0: usett0.o tabtenn0.o
	$(CXX) -o usett0 usett0.o tabtenn0.o
usett1: usett1.o tabtenn1.o
	$(CXX) -o usett1 usett1.o tabtenn1.o


acctabc.o: acctabc.cpp
	$(CXX) -c acctabc.cpp
brass.o: brass.cpp
	$(CXX) -c brass.cpp
dma.o: dma.cpp
	$(CXX) -c dma.cpp
tabtenn0.o: tabtenn0.cpp
	$(CXX) -c tabtenn0.cpp
tabtenn1.o: tabtenn1.cpp
	$(CXX) -c tabtenn1.cpp
usebrass1.o: usebrass1.cpp
	$(CXX) -c usebrass1.cpp
usebrass2.o: usebrass2.cpp
	$(CXX) -c usebrass2.cpp
usebrass3.o: usebrass3.cpp
	$(CXX) -c usebrass3.cpp
usedma.o: usedma.cpp
	$(CXX) -c usedma.cpp
usett0.o: usett0.cpp
	$(CXX) -c usett0.cpp
usett1.o: usett1.cpp
	$(CXX) -c usett1.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
