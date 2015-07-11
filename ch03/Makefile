.PHONY: all
all : arith bondini chartype divide exceed floatnum fltadd hexoct1 hexoct2 init limits modulus morechar typecast
arith: arith.o
	g++ -o arith arith.o
bondini: bondini.o
	g++ -o bondini bondini.o
chartype: chartype.o
	g++ -o chartype chartype.o
divide: divide.o
	g++ -o divide divide.o
exceed: exceed.o
	g++ -o exceed exceed.o
floatnum: floatnum.o
	g++ -o floatnum floatnum.o
fltadd: fltadd.o
	g++ -o fltadd fltadd.o
hexoct1: hexoct1.o
	g++ -o hexoct1 hexoct1.o
hexoct2: hexoct2.o
	g++ -o hexoct2 hexoct2.o
init: init.o
	g++ -o init init.o
limits: limits.o
	g++ -o limits limits.o
modulus: modulus.o
	g++ -o modulus modulus.o
morechar: morechar.o
	g++ -o morechar morechar.o
typecast: typecast.o
	g++ -o typecast typecast.o


arith.o: arith.cpp
	g++ -c arith.cpp
bondini.o: bondini.cpp
	g++ -c bondini.cpp
chartype.o: chartype.cpp
	g++ -c chartype.cpp
divide.o: divide.cpp
	g++ -c divide.cpp
exceed.o: exceed.cpp
	g++ -c exceed.cpp
floatnum.o: floatnum.cpp
	g++ -c floatnum.cpp
fltadd.o: fltadd.cpp
	g++ -c fltadd.cpp
hexoct1.o: hexoct1.cpp
	g++ -c hexoct1.cpp
hexoct2.o: hexoct2.cpp
	g++ -c hexoct2.cpp
init.o: init.cpp
	g++ -c init.cpp
limits.o: limits.cpp
	g++ -c limits.cpp
modulus.o: modulus.cpp
	g++ -c modulus.cpp
morechar.o: morechar.cpp
	g++ -c morechar.cpp
typecast.o: typecast.cpp
	g++ -c typecast.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
