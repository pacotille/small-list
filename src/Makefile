

all : test_all GenericList.o GenericList_test.o  TrainList_test.o

GenericList.o :  GenericList.c ../include/GenericList.h
	cc -g -c GenericList.c -o GenericList.o -I../include

GenericList_test.o :  GenericList_test.c ../include/GenericList_test.h
	cc -g -c GenericList_test.c -o GenericList_test.o -I../include

TrainList_test.o :  TrainList_test.c ../include/TrainList_test.h
	cc -g -c TrainList_test.c -o TrainList_test.o -I../include

test_all : GenericList_test.o GenericList.o TrainList_test.o
	cc -g  GenericList_test.o GenericList.o TrainList_test.o test_all.c -o test_all -I../include

clean :
	rm -f *.o test_gen 
