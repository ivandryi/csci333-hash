CPP = g++
CFLAGS = -Wall -Wextra

htest: hash_test.cpp Hashtable.o Entry.o
	$(CPP) $(CFLAGS) -o htest hash_test.cpp Hashtable.o Entry.o 

Hashtable.o: Hashtable.h Hashtable.cpp
	$(CPP) $(CFLAGS) -c Hashtable.cpp

etest: entry_test.cpp Entry.o
	$(CPP) $(CFLAGS) -o etest entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f etest;
	rm -f htest;
	rm -f *~;