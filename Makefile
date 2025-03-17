CXX = clang++
CXXFLAGS = -Wall -Wextra -std=c++20 -O2
LDFLAGS = -lstdc++

all: test

test: test.cpp libos-bar.cpp libos-solver.cpp
	$(CXX) $(CXXFLAGS) -o test test.cpp libos-bar.cpp libos-solver.cpp $(LDFLAGS)

clean:
	rm -f test