pa3: main.cpp Money.o Account.o 
	g++ -o pa3 main.cpp Money.o Account.o

money.o: Money.cpp Money.h
	g++ -c Money.cpp

account.o: Account.cpp Money.h Account.h 
	g++ -c Account.cpp

clean:
	rm *.o pa3