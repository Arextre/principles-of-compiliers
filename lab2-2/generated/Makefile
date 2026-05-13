target=scanner
objs=SysyBaseListener.o SysyBaseVisitor.o SysyLexer.o SysyListener.o SysyParser.o SysyVisitor.o main.o
CC=g++
CXXFLAGS += -std=c++17 -I/usr/include/antlr4-runtime
LIBS += -lantlr4-runtime

main:$(objs)
	$(CC) -o $(target)  $(objs) $(LIBS)
%.o:%.cpp
	$(CC) $(CXXFLAGS) -c $<
    
