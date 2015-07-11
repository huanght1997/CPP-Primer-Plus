.PHONY: all
all : and cctypes cinfish cingolf condit enum if ifelse ifelseif jump more_and not or outfile sumafile switch
and: and.o
	g++ -o and and.o
cctypes: cctypes.o
	g++ -o cctypes cctypes.o
cinfish: cinfish.o
	g++ -o cinfish cinfish.o
cingolf: cingolf.o
	g++ -o cingolf cingolf.o
condit: condit.o
	g++ -o condit condit.o
enum: enum.o
	g++ -o enum enum.o
if: if.o
	g++ -o if if.o
ifelse: ifelse.o
	g++ -o ifelse ifelse.o
ifelseif: ifelseif.o
	g++ -o ifelseif ifelseif.o
jump: jump.o
	g++ -o jump jump.o
more_and: more_and.o
	g++ -o more_and more_and.o
not: not.o
	g++ -o not not.o
or: or.o
	g++ -o or or.o
outfile: outfile.o
	g++ -o outfile outfile.o
sumafile: sumafile.o
	g++ -o sumafile sumafile.o
switch: switch.o
	g++ -o switch switch.o


and.o: and.cpp
	g++ -c and.cpp
cctypes.o: cctypes.cpp
	g++ -c cctypes.cpp
cinfish.o: cinfish.cpp
	g++ -c cinfish.cpp
cingolf.o: cingolf.cpp
	g++ -c cingolf.cpp
condit.o: condit.cpp
	g++ -c condit.cpp
enum.o: enum.cpp
	g++ -c enum.cpp
if.o: if.cpp
	g++ -c if.cpp
ifelse.o: ifelse.cpp
	g++ -c ifelse.cpp
ifelseif.o: ifelseif.cpp
	g++ -c ifelseif.cpp
jump.o: jump.cpp
	g++ -c jump.cpp
more_and.o: more_and.cpp
	g++ -c more_and.cpp
not.o: not.cpp
	g++ -c not.cpp
or.o: or.cpp
	g++ -c or.cpp
outfile.o: outfile.cpp
	g++ -c outfile.cpp
sumafile.o: sumafile.cpp
	g++ -c sumafile.cpp
switch.o: switch.cpp
	g++ -c switch.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
