CXX = g++
.PHONY: all
all : frnd2tmp manyfrnd pairs stacktem stkoptr1 tempmemb tempparm tmp2tmp twod use_stuc use_stui workmi worktest
frnd2tmp: frnd2tmp.o
	$(CXX) -o frnd2tmp frnd2tmp.o
manyfrnd: manyfrnd.o
	$(CXX) -o manyfrnd manyfrnd.o
pairs: pairs.o
	$(CXX) -o pairs pairs.o
stacktem: stacktem.o 
	$(CXX) -o stacktem stacktem.o 
stkoptr1: stkoptr1.o 
	$(CXX) -o stkoptr1 stkoptr1.o 
tempmemb: tempmemb.o
	$(CXX) -o tempmemb tempmemb.o
tempparm: tempparm.o 
	$(CXX) -o tempparm tempparm.o 
tmp2tmp: tmp2tmp.o
	$(CXX) -o tmp2tmp tmp2tmp.o
twod: twod.o 
	$(CXX) -o twod twod.o 
use_stuc: use_stuc.o studentc.o
	$(CXX) -o use_stuc use_stuc.o studentc.o
use_stui: use_stui.o studenti.o
	$(CXX) -o use_stui use_stui.o studenti.o
workmi: workmi.o workermi.o
	$(CXX) -o workmi workmi.o workermi.o
worktest: worktest.o worker0.o
	$(CXX) -o worktest worktest.o worker0.o


frnd2tmp.o: frnd2tmp.cpp
	$(CXX) -c frnd2tmp.cpp
manyfrnd.o: manyfrnd.cpp
	$(CXX) -c manyfrnd.cpp
pairs.o: pairs.cpp
	$(CXX) -c pairs.cpp
stacktem.o: stacktem.cpp
	$(CXX) -c stacktem.cpp
stkoptr1.o: stkoptr1.cpp
	$(CXX) -c stkoptr1.cpp
studentc.o: studentc.cpp
	$(CXX) -c studentc.cpp
studenti.o: studenti.cpp
	$(CXX) -c studenti.cpp
tempmemb.o: tempmemb.cpp
	$(CXX) -c tempmemb.cpp
tempparm.o: tempparm.cpp
	$(CXX) -c tempparm.cpp
tmp2tmp.o: tmp2tmp.cpp
	$(CXX) -c tmp2tmp.cpp
twod.o: twod.cpp
	$(CXX) -c twod.cpp
use_stuc.o: use_stuc.cpp
	$(CXX) -c use_stuc.cpp
use_stui.o: use_stui.cpp
	$(CXX) -c use_stui.cpp
worker0.o: worker0.cpp
	$(CXX) -c worker0.cpp
workermi.o: workermi.cpp
	$(CXX) -c workermi.cpp
workmi.o: workmi.cpp
	$(CXX) -c workmi.cpp
worktest.o: worktest.cpp
	$(CXX) -c worktest.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
