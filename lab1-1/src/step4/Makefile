objects := main.o helloworld.o
CXX := clang++
CXXFLAGS := -std=c++17 -Wall -Wextra -g
LIBPATH := ./include

helloworld: $(objects)
	$(CXX) $(objects) -o $@

%.o: %.cc
	$(CXX) $(CXXFLAGS) -I$(LIBPATH) -c $< -o $@