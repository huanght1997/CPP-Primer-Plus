.PHONY: all
all : arfupt arrfun1 arrfun2 arrfun3 arrfun4 arrobj atrcfun calling fun_ptr lotto protos recur ruler strctptr strgback strgfun topfive travel twoarg
arfupt: arfupt.o
	g++ -o arfupt arfupt.o
arrfun1: arrfun1.o
	g++ -o arrfun1 arrfun1.o
arrfun2: arrfun2.o
	g++ -o arrfun2 arrfun2.o
arrfun3: arrfun3.o
	g++ -o arrfun3 arrfun3.o
arrfun4: arrfun4.o
	g++ -o arrfun4 arrfun4.o
arrobj: arrobj.o
	g++ -o arrobj arrobj.o
atrcfun: atrcfun.o
	g++ -o atrcfun atrcfun.o
calling: calling.o
	g++ -o calling calling.o
fun_ptr: fun_ptr.o
	g++ -o fun_ptr fun_ptr.o
lotto: lotto.o
	g++ -o lotto lotto.o
protos: protos.o
	g++ -o protos protos.o
recur: recur.o
	g++ -o recur recur.o
ruler: ruler.o
	g++ -o ruler ruler.o
strctptr: strctptr.o
	g++ -o strctptr strctptr.o
strgback: strgback.o
	g++ -o strgback strgback.o
strgfun: strgfun.o
	g++ -o strgfun strgfun.o
topfive: topfive.o
	g++ -o topfive topfive.o
travel: travel.o
	g++ -o travel travel.o
twoarg: twoarg.o
	g++ -o twoarg twoarg.o


arfupt.o: arfupt.cpp
	g++ -c arfupt.cpp -std=c++11
arrfun1.o: arrfun1.cpp
	g++ -c arrfun1.cpp
arrfun2.o: arrfun2.cpp
	g++ -c arrfun2.cpp
arrfun3.o: arrfun3.cpp
	g++ -c arrfun3.cpp
arrfun4.o: arrfun4.cpp
	g++ -c arrfun4.cpp
arrobj.o: arrobj.cpp
	g++ -c arrobj.cpp -std=c++11
atrcfun.o: atrcfun.cpp
	g++ -c atrcfun.cpp
calling.o: calling.cpp
	g++ -c calling.cpp
fun_ptr.o: fun_ptr.cpp
	g++ -c fun_ptr.cpp
lotto.o: lotto.cpp
	g++ -c lotto.cpp
protos.o: protos.cpp
	g++ -c protos.cpp
recur.o: recur.cpp
	g++ -c recur.cpp
ruler.o: ruler.cpp
	g++ -c ruler.cpp
strctptr.o: strctptr.cpp
	g++ -c strctptr.cpp
strgback.o: strgback.cpp
	g++ -c strgback.cpp
strgfun.o: strgfun.cpp
	g++ -c strgfun.cpp
topfive.o: topfive.cpp
	g++ -c topfive.cpp
travel.o: travel.cpp
	g++ -c travel.cpp
twoarg.o: twoarg.cpp
	g++ -c twoarg.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
