all: destination clean_o

utils.o: ../logic/utils/utils.c ../logic/utils/utils.h
	gcc ../logic/utils/utils.c -c -Wall -Wextra -lm
testD.o: testD.c ../model/destination/destination.h ../logic/utils/utils.h
	gcc testD.c -c -Wall -Wextra -lm
destination.o: ../model/destination/destination.c ../model/destination/destination.h
	gcc ../model/destination/destination.c -c -Wall -Wextra -lm
destination: testD.o destination.o utils.o
	gcc testD.o destination.o utils.o -o test.exe -Wall -Wextra -lm
clean:
	rm *.o test.exe 
clean_o:
	rm *.o
