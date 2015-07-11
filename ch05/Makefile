.PHONY: all
all : bigstep block compstr1 compstr2 dowhile equal express forloop formore forstr1 forstr2 nested num_test plus_one textin1 textin2 textin3 textin4 waiting while
bigstep: bigstep.o
	g++ -o bigstep bigstep.o
block: block.o
	g++ -o block block.o
compstr1: compstr1.o
	g++ -o compstr1 compstr1.o
compstr2: compstr2.o
	g++ -o compstr2 compstr2.o
dowhile: dowhile.o
	g++ -o dowhile dowhile.o
equal: equal.o
	g++ -o equal equal.o
express: express.o
	g++ -o express express.o
forloop: forloop.o
	g++ -o forloop forloop.o
formore: formore.o
	g++ -o formore formore.o
forstr1: forstr1.o
	g++ -o forstr1 forstr1.o
forstr2: forstr2.o
	g++ -o forstr2 forstr2.o
nested: nested.o
	g++ -o nested nested.o
num_test: num_test.o
	g++ -o num_test num_test.o
plus_one: plus_one.o
	g++ -o plus_one plus_one.o
textin1: textin1.o
	g++ -o textin1 textin1.o
textin2: textin2.o
	g++ -o textin2 textin2.o
textin3: textin3.o
	g++ -o textin3 textin3.o
textin4: textin4.o
	g++ -o textin4 textin4.o
waiting: waiting.o
	g++ -o waiting waiting.o
while: while.o
	g++ -o while while.o


bigstep.o: bigstep.cpp
	g++ -c bigstep.cpp
block.o: block.cpp
	g++ -c block.cpp
compstr1.o: compstr1.cpp
	g++ -c compstr1.cpp
compstr2.o: compstr2.cpp
	g++ -c compstr2.cpp
dowhile.o: dowhile.cpp
	g++ -c dowhile.cpp
equal.o: equal.cpp
	g++ -c equal.cpp
express.o: express.cpp
	g++ -c express.cpp
forloop.o: forloop.cpp
	g++ -c forloop.cpp
formore.o: formore.cpp
	g++ -c formore.cpp
forstr1.o: forstr1.cpp
	g++ -c forstr1.cpp
forstr2.o: forstr2.cpp
	g++ -c forstr2.cpp
nested.o: nested.cpp
	g++ -c nested.cpp
num_test.o: num_test.cpp
	g++ -c num_test.cpp
plus_one.o: plus_one.cpp
	g++ -c plus_one.cpp
textin1.o: textin1.cpp
	g++ -c textin1.cpp
textin2.o: textin2.cpp
	g++ -c textin2.cpp
textin3.o: textin3.cpp
	g++ -c textin3.cpp
textin4.o: textin4.cpp
	g++ -c textin4.cpp
waiting.o: waiting.cpp
	g++ -c waiting.cpp
while.o: while.cpp
	g++ -c while.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
