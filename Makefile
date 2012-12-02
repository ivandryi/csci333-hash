CPP = g++
CFLAGS = -Wall -Wextra

#Hashtable.o: Hashtable.o Hashtable.cpp
#	$(CPP) $(CGLAGS) -c Hashtable.cpp

etest: entry_test.cpp Entry.o
	$(CPP) $(CFLAGS) -o etest entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f etest;
	rm -f *~;