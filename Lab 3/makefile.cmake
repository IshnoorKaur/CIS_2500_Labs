lab3: kaurIshnoorL2.o 
    gcc -Wall -std=c99 kaurIshnoorL2.o -o lab3
kaurIshnoorL2.o: kaurIshnoorL2.c 
    gcc -Wall -std=c99 -c kaurIshnoorL2.c
clean:
    rm *.o lab3