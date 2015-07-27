CXX = g++
.PHONY: all
all : constcast error1 error2 error3 error4 error5 nested newexcp rtti1 rtti2 use_sales use_tv
constcast: constcast.o
	$(CXX) -o constcast constcast.o
error1: error1.o
	$(CXX) -o error1 error1.o
error2: error2.o
	$(CXX) -o error2 error2.o
error3: error3.o
	$(CXX) -o error3 error3.o
error4: error4.o 
	$(CXX) -o error4 error4.o 
error5: error5.o 
	$(CXX) -o error5 error5.o 
nested: nested.o 
	$(CXX) -o nested nested.o 
newexcp: newexcp.o
	$(CXX) -o newexcp newexcp.o
rtti1: rtti1.o
	$(CXX) -o rtti1 rtti1.o
rtti2: rtti2.o
	$(CXX) -o rtti2 rtti2.o
use_sales: use_sales.o sales.o
	$(CXX) -o use_sales use_sales.o sales.o
use_tv: use_tv.o tv.o
	$(CXX) -o use_tv use_tv.o tv.o


constcast.o: constcast.cpp
	$(CXX) -c constcast.cpp
error1.o: error1.cpp
	$(CXX) -c error1.cpp
error2.o: error2.cpp
	$(CXX) -c error2.cpp
error3.o: error3.cpp
	$(CXX) -c error3.cpp
error4.o: error4.cpp
	$(CXX) -c error4.cpp
error5.o: error5.cpp
	$(CXX) -c error5.cpp
nested.o: nested.cpp
	$(CXX) -c nested.cpp
newexcp.o: newexcp.cpp
	$(CXX) -c newexcp.cpp
rtti1.o: rtti1.cpp
	$(CXX) -c rtti1.cpp
rtti2.o: rtti2.cpp
	$(CXX) -c rtti2.cpp
sales.o: sales.cpp
	$(CXX) -c sales.cpp
tv.o: tv.cpp
	$(CXX) -c tv.cpp
use_sales.o: use_sales.cpp
	$(CXX) -c use_sales.cpp
use_tv.o: use_tv.cpp
	$(CXX) -c use_tv.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
