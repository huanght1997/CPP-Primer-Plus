CXX = g++
.PHONY: all
all : callable lambda0 lambda1 lexcast rvref stdmove useless variadic1 variadic2 wrapped
callable: callable.o 
	$(CXX) -o callable callable.o 
lambda0: lambda0.o
	$(CXX) -o lambda0 lambda0.o
lambda1: lambda1.o
	$(CXX) -o lambda1 lambda1.o
lexcast: lexcast.o 
	$(CXX) -o lexcast lexcast.o 
rvref: rvref.o
	$(CXX) -o rvref rvref.o
stdmove: stdmove.o
	$(CXX) -o stdmove stdmove.o
useless: useless.o
	$(CXX) -o useless useless.o
variadic1: variadic1.o
	$(CXX) -o variadic1 variadic1.o
variadic2: variadic2.o
	$(CXX) -o variadic2 variadic2.o
wrapped: wrapped.o 
	$(CXX) -o wrapped wrapped.o 


callable.o: callable.cpp
	$(CXX) -c callable.cpp -std=c++11
lambda0.o: lambda0.cpp
	$(CXX) -c lambda0.cpp -std=c++11
lambda1.o: lambda1.cpp
	$(CXX) -c lambda1.cpp -std=c++11
lexcast.o: lexcast.cpp
	$(CXX) -c lexcast.cpp
rvref.o: rvref.cpp
	$(CXX) -c rvref.cpp -std=c++11
stdmove.o: stdmove.cpp
	$(CXX) -c stdmove.cpp -std=c++11
useless.o: useless.cpp
	$(CXX) -c useless.cpp -std=c++11
variadic1.o: variadic1.cpp
	$(CXX) -c variadic1.cpp -std=c++11
variadic2.o: variadic2.cpp
	$(CXX) -c variadic2.cpp -std=c++11
wrapped.o: wrapped.cpp
	$(CXX) -c wrapped.cpp -std=c++11
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
