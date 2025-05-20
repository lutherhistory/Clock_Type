main:
	g++ index.cpp ClockTypeImp.o -o main && ./main

link:
	g++ -c ClockTypeImp.cpp