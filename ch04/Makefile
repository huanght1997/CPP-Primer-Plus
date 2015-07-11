.PHONY: all
all : addpntrs address arraynew arrayone arrstruc assgn_st choices delete init_ptr instr1 instr2 instr3 mixtypes newstrct numstr pointer ptrstr strings strtype1 strtype2 strtype3 strtype4 structur use_new
addpntrs: addpntrs.o
	g++ -o addpntrs addpntrs.o
address: address.o
	g++ -o address address.o
arraynew: arraynew.o
	g++ -o arraynew arraynew.o
arrayone: arrayone.o
	g++ -o arrayone arrayone.o
arrstruc: arrstruc.o
	g++ -o arrstruc arrstruc.o
assgn_st: assgn_st.o
	g++ -o assgn_st assgn_st.o
choices: choices.o
	g++ -o choices choices.o
delete: delete.o
	g++ -o delete delete.o
init_ptr: init_ptr.o
	g++ -o init_ptr init_ptr.o
instr1: instr1.o
	g++ -o instr1 instr1.o
instr2: instr2.o
	g++ -o instr2 instr2.o
instr3: instr3.o
	g++ -o instr3 instr3.o
mixtypes: mixtypes.o
	g++ -o mixtypes mixtypes.o
newstrct: newstrct.o
	g++ -o newstrct newstrct.o
numstr: numstr.o
	g++ -o numstr numstr.o
pointer: pointer.o
	g++ -o pointer pointer.o
ptrstr: ptrstr.o
	g++ -o ptrstr ptrstr.o
strings: strings.o
	g++ -o strings strings.o
strtype1: strtype1.o
	g++ -o strtype1 strtype1.o
strtype2: strtype2.o
	g++ -o strtype2 strtype2.o
strtype3: strtype3.o
	g++ -o strtype3 strtype3.o
strtype4: strtype4.o
	g++ -o strtype4 strtype4.o
structur: structur.o
	g++ -o structur structur.o
use_new: use_new.o
	g++ -o use_new use_new.o


addpntrs.o: addpntrs.cpp
	g++ -c addpntrs.cpp
address.o: address.cpp
	g++ -c address.cpp
arraynew.o: arraynew.cpp
	g++ -c arraynew.cpp
arrayone.o: arrayone.cpp
	g++ -c arrayone.cpp
arrstruc.o: arrstruc.cpp
	g++ -c arrstruc.cpp
assgn_st.o: assgn_st.cpp
	g++ -c assgn_st.cpp
choices.o: choices.cpp
	g++ -c choices.cpp -std=c++11
delete.o: delete.cpp
	g++ -c delete.cpp
init_ptr.o: init_ptr.cpp
	g++ -c init_ptr.cpp
instr1.o: instr1.cpp
	g++ -c instr1.cpp
instr2.o: instr2.cpp
	g++ -c instr2.cpp
instr3.o: instr3.cpp
	g++ -c instr3.cpp
mixtypes.o: mixtypes.cpp
	g++ -c mixtypes.cpp -std=c++11
newstrct.o: newstrct.cpp
	g++ -c newstrct.cpp
numstr.o: numstr.cpp
	g++ -c numstr.cpp
pointer.o: pointer.cpp
	g++ -c pointer.cpp
ptrstr.o: ptrstr.cpp
	g++ -c ptrstr.cpp
strings.o: strings.cpp
	g++ -c strings.cpp
strtype1.o: strtype1.cpp
	g++ -c strtype1.cpp
strtype2.o: strtype2.cpp
	g++ -c strtype2.cpp
strtype3.o: strtype3.cpp
	g++ -c strtype3.cpp
strtype4.o: strtype4.cpp
	g++ -c strtype4.cpp
structur.o: structur.cpp
	g++ -c structur.cpp
use_new.o: use_new.cpp
	g++ -c use_new.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
