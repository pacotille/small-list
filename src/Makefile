

all : test_gen GenericList.o GenericList_test.o 

GenericList.o :  GenericList.c
	cc -g -c GenericList.c -o GenericList.o -I../include

GenericList_test.o :  GenericList_test.c
	cc -g -c GenericList_test.c -o GenericList_test.o -I../include

test_gen :  GenericList_test.o GenericList.o
	cc -g  GenericList_test.o GenericList.o test_all.c -o test_gen -I../include

clean :
	rm -f *.o test_gen 
