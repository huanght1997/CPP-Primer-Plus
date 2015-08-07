CXX = g++
.PHONY: all
all : copyit fowl funadap functor hangman ilist inserts list listrmv multmap setops smrtptrs str1 str2 strfile strgst1 usealgo valvect vect1 vect2 vect3 vslice
copyit: copyit.o
	$(CXX) -o copyit copyit.o
fowl: fowl.o
	$(CXX) -o fowl fowl.o
funadap: funadap.o
	$(CXX) -o funadap funadap.o
functor: functor.o
	$(CXX) -o functor functor.o
hangman: hangman.o
	$(CXX) -o hangman hangman.o
ilist: ilist.o
	$(CXX) -o ilist ilist.o
inserts: inserts.o
	$(CXX) -o inserts inserts.o
list: list.o
	$(CXX) -o list list.o
listrmv: listrmv.o
	$(CXX) -o listrmv listrmv.o
multmap: multmap.o
	$(CXX) -o multmap multmap.o
setops: setops.o
	$(CXX) -o setops setops.o
smrtptrs: smrtptrs.o
	$(CXX) -o smrtptrs smrtptrs.o
str1: str1.o
	$(CXX) -o str1 str1.o
str2: str2.o
	$(CXX) -o str2 str2.o
strfile: strfile.o
	$(CXX) -o strfile strfile.o
strgst1: strgst1.o
	$(CXX) -o strgst1 strgst1.o
usealgo: usealgo.o
	$(CXX) -o usealgo usealgo.o
valvect: valvect.o
	$(CXX) -o valvect valvect.o
vect1: vect1.o
	$(CXX) -o vect1 vect1.o
vect2: vect2.o
	$(CXX) -o vect2 vect2.o
vect3: vect3.o
	$(CXX) -o vect3 vect3.o
vslice: vslice.o
	$(CXX) -o vslice vslice.o


copyit.o: copyit.cpp
	$(CXX) -c copyit.cpp
fowl.o: fowl.cpp
	$(CXX) -c fowl.cpp
funadap.o: funadap.cpp
	$(CXX) -c funadap.cpp
functor.o: functor.cpp
	$(CXX) -c functor.cpp
hangman.o: hangman.cpp
	$(CXX) -c hangman.cpp
ilist.o: ilist.cpp
	$(CXX) -c ilist.cpp -std=c++11
inserts.o: inserts.cpp
	$(CXX) -c inserts.cpp
list.o: list.cpp
	$(CXX) -c list.cpp
listrmv.o: listrmv.cpp
	$(CXX) -c listrmv.cpp
multmap.o: multmap.cpp
	$(CXX) -c multmap.cpp
setops.o: setops.cpp
	$(CXX) -c setops.cpp
smrtptrs.o: smrtptrs.cpp
	$(CXX) -c smrtptrs.cpp -std=c++11
str1.o: str1.cpp
	$(CXX) -c str1.cpp
str2.o: str2.cpp
	$(CXX) -c str2.cpp
strfile.o: strfile.cpp
	$(CXX) -c strfile.cpp
strgst1.o: strgst1.cpp
	$(CXX) -c strgst1.cpp
usealgo.o: usealgo.cpp
	$(CXX) -c usealgo.cpp
valvect.o: valvect.cpp
	$(CXX) -c valvect.cpp
vect1.o: vect1.cpp
	$(CXX) -c vect1.cpp
vect2.o: vect2.cpp
	$(CXX) -c vect2.cpp
vect3.o: vect3.cpp
	$(CXX) -c vect3.cpp
vslice.o: vslice.cpp
	$(CXX) -c vslice.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
