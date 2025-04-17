MODSYN            = src/main.cpp src/modsyn.cpp 
TESTMODSYN        = test/src/main.cpp  test/src/TestModSyn.cpp src/modsyn.cpp

CSOUND  = -lcsound64 -lcsnd6
INCLUDE = -I/usr/include/csound/
CPPUNIT = -lcppunit
CC	= g++

all: modsyn testmodsyn

modsyn: $(MODSYN) 
	$(CC) $(MODSYN) -o bin/modsyn

testmodsyn: $(TESTMODSYN) 
	$(CC) $(TESTMODSYN) -o bin/testmodsyn $(CPPUNIT)

clean:
	rm -f bin/testsheetbuilder
	rm -f bin/modsyn
	rm -f bin/testmodsyn
