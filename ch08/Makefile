.PHONY: all
all : choices cubes filefunc firstref funtemp inline left leftover secref strc_ref strquote swaps tempover twoswap twotemps
choices: choices.o
	g++ -o choices choices.o
cubes: cubes.o
	g++ -o cubes cubes.o
filefunc: filefunc.o
	g++ -o filefunc filefunc.o
firstref: firstref.o
	g++ -o firstref firstref.o
funtemp: funtemp.o
	g++ -o funtemp funtemp.o
inline: inline.o
	g++ -o inline inline.o
left: left.o
	g++ -o left left.o
leftover: leftover.o
	g++ -o leftover leftover.o
secref: secref.o
	g++ -o secref secref.o
strc_ref: strc_ref.o
	g++ -o strc_ref strc_ref.o
strquote: strquote.o
	g++ -o strquote strquote.o
swaps: swaps.o
	g++ -o swaps swaps.o
tempover: tempover.o
	g++ -o tempover tempover.o
twoswap: twoswap.o
	g++ -o twoswap twoswap.o
twotemps: twotemps.o
	g++ -o twotemps twotemps.o


choices.o: choices.cpp
	g++ -c choices.cpp
cubes.o: cubes.cpp
	g++ -c cubes.cpp
filefunc.o: filefunc.cpp
	g++ -c filefunc.cpp
firstref.o: firstref.cpp
	g++ -c firstref.cpp
funtemp.o: funtemp.cpp
	g++ -c funtemp.cpp
inline.o: inline.cpp
	g++ -c inline.cpp
left.o: left.cpp
	g++ -c left.cpp
leftover.o: leftover.cpp
	g++ -c leftover.cpp
secref.o: secref.cpp
	g++ -c secref.cpp
strc_ref.o: strc_ref.cpp
	g++ -c strc_ref.cpp
strquote.o: strquote.cpp
	g++ -c strquote.cpp
swaps.o: swaps.cpp
	g++ -c swaps.cpp
tempover.o: tempover.cpp
	g++ -c tempover.cpp
twoswap.o: twoswap.cpp
	g++ -c twoswap.cpp
twotemps.o: twotemps.cpp
	g++ -c twotemps.cpp
.PHONY: cleanobj
cleanobj:
	rm -f *.o

.PHONY: clean
clean:
	find . -maxdepth 1 -type f -perm /111 -exec rm {} \;
	rm -f *.o
