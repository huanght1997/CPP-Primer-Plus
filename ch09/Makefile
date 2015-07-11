.PHONY: all
all : autoscp coordin extern namesp newplace static twofile
autoscp: autoscp.o
	g++ -o autoscp autoscp.o
coordin: file1.o file2.o
	g++ -o coordin file1.o file2.o
extern: external.o support.o
	g++ -o extern external.o support.o
namesp: namesp.o usenmsp.o
	g++ -o namesp namesp.o usenmsp.o
newplace: newplace.o
	g++ -o newplace newplace.o
static: static.o
	g++ -o static static.o
twofile: twofile1.o twofile2.o
	g++ -o twofile twofile1.o twofile2.o


autoscp.o: autoscp.cpp
	g++ -c autoscp.cpp
external.o: external.cpp
	g++ -c external.cpp
file1.o: file1.cpp coordin.h
	g++ -c file1.cpp
file2.o: file2.cpp coordin.h
	g++ -c file2.cpp
namesp.o: namesp.cpp namesp.h
	g++ -c namesp.cpp
newplace.o: newplace.cpp
	g++ -c newplace.cpp
static.o: static.cpp
	g++ -c static.cpp
support.o: support.cpp
	g++ -c support.cpp
twofile1.o: twofile1.cpp
	g++ -c twofile1.cpp
twofile2.o: twofile2.cpp
	g++ -c twofile2.cpp
usenmsp.o: usenmsp.cpp namesp.h
	g++ -c usenmsp.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
