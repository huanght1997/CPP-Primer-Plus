CXX = g++
.PHONY: all
all : align memb_pt
align: align.o
	$(CXX) -o align align.o
memb_pt: memb_pt.o
	$(CXX) -o memb_pt memb_pt.o


align.o: align.cpp
	$(CXX) -c align.cpp -std=c++11
memb_pt.o: memb_pt.cpp
	$(CXX) -c memb_pt.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
