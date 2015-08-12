CXX = g++
.PHONY: all
all : append binary check_it cinexcp count defaults fileio fill get_fun iomanip manip peeker precise random setf setf2 showpt strin strout truncate width write
append: append.o
	$(CXX) -o append append.o
binary: binary.o
	$(CXX) -o binary binary.o
check_it: check_it.o
	$(CXX) -o check_it check_it.o
cinexcp: cinexcp.o
	$(CXX) -o cinexcp cinexcp.o
count: count.o
	$(CXX) -o count count.o
defaults: defaults.o
	$(CXX) -o defaults defaults.o
fileio: fileio.o
	$(CXX) -o fileio fileio.o
fill: fill.o
	$(CXX) -o fill fill.o
get_fun: get_fun.o
	$(CXX) -o get_fun get_fun.o
iomanip: iomanip.o
	$(CXX) -o iomanip iomanip.o
manip: manip.o
	$(CXX) -o manip manip.o
peeker: peeker.o
	$(CXX) -o peeker peeker.o
precise: precise.o
	$(CXX) -o precise precise.o
random: random.o
	$(CXX) -o random random.o
setf: setf.o
	$(CXX) -o setf setf.o
setf2: setf2.o
	$(CXX) -o setf2 setf2.o
showpt: showpt.o
	$(CXX) -o showpt showpt.o
strin: strin.o
	$(CXX) -o strin strin.o
strout: strout.o
	$(CXX) -o strout strout.o
truncate: truncate.o
	$(CXX) -o truncate truncate.o
width: width.o
	$(CXX) -o width width.o
write: write.o
	$(CXX) -o write write.o


append.o: append.cpp
	$(CXX) -c append.cpp
binary.o: binary.cpp
	$(CXX) -c binary.cpp
check_it.o: check_it.cpp
	$(CXX) -c check_it.cpp
cinexcp.o: cinexcp.cpp
	$(CXX) -c cinexcp.cpp
count.o: count.cpp
	$(CXX) -c count.cpp
defaults.o: defaults.cpp
	$(CXX) -c defaults.cpp
fileio.o: fileio.cpp
	$(CXX) -c fileio.cpp
fill.o: fill.cpp
	$(CXX) -c fill.cpp
get_fun.o: get_fun.cpp
	$(CXX) -c get_fun.cpp
iomanip.o: iomanip.cpp
	$(CXX) -c iomanip.cpp
manip.o: manip.cpp
	$(CXX) -c manip.cpp
peeker.o: peeker.cpp
	$(CXX) -c peeker.cpp -std=c++11
precise.o: precise.cpp
	$(CXX) -c precise.cpp
random.o: random.cpp
	$(CXX) -c random.cpp
setf2.o: setf2.cpp
	$(CXX) -c setf2.cpp
setf.o: setf.cpp
	$(CXX) -c setf.cpp
showpt.o: showpt.cpp
	$(CXX) -c showpt.cpp
strin.o: strin.cpp
	$(CXX) -c strin.cpp
strout.o: strout.cpp
	$(CXX) -c strout.cpp
truncate.o: truncate.cpp
	$(CXX) -c truncate.cpp
width.o: width.cpp
	$(CXX) -c width.cpp
write.o: write.cpp
	$(CXX) -c write.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
