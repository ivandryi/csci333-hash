CPP = g++;
CFLAGS = -Wall -Wextra

Hashtable.o: Hashtable.o Hashtable.cpp
	$(CPP) $(CGLAGS) -c Hashtable.cpp

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f *~;