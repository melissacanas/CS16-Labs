#CXX = g++
CXX = clang++

#CXXFLAGS = -WALL -Wno-uninitalized

BINARIES = recLinkedListFuncsTest strFuncsTest

COMMON_OBJECT_FILES = tddFuncs.o recLinkedListFuncs.o strFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./recLinkedListFuncsTest
	./strFuncsTest

recLinkedListFuncsTest: recLinkedListFuncsTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

strFuncsTest: strFuncsTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
