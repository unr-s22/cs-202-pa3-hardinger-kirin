pa3: main.cpp Money.o
	g++ -o pa3 main.cpp Money.o

money.o: Money.cpp Money.h
	g++ -c Money.cpp

clean:
	rm *.o pa3