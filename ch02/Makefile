.PHONY: all
all: myfirst carrot getinfo sqrt ourfunc convert
myfirst: myfirst.o
	g++ -o myfirst myfirst.o
carrot: carrot.o
	g++ -o carrot carrot.o
getinfo: getinfo.o
	g++ -o getinfo getinfo.o
sqrt: sqrt.o
	g++ -o sqrt sqrt.o
ourfunc: ourfunc.o
	g++ -o ourfunc ourfunc.o
convert: convert.o
	g++ -o convert convert.o

myfirst.o: myfirst.cpp
	g++ -c myfirst.cpp
carrot.o: carrot.cpp
	g++ -c carrot.cpp
getinfo.o: getinfo.cpp
	g++ -c getinfo.cpp
sqrt.o: sqrt.cpp
	g++ -c sqrt.cpp
ourfunc.o: ourfunc.cpp
	g++ -c ourfunc.cpp
convert.o: convert.cpp
	g++ -c convert.cpp

.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
