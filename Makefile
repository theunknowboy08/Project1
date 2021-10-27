
all:main

main: source.o
	g++ source.o -o main

source.o:source.cpp
	g++ -c source.cpp
clean:
	rm -f $(binaries) *.o
