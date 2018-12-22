#include "../model/destination/destination.h"
#include "../logic/utils/utils.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#define PATH  "../data/mainDatabase.nymal"

void testPosition(){
	int i = 0;
	int j = 0;
	printf("DIRECCION i: %d j: %d\n",i,j);
	printf("NORTH\n");
	advanceInDirection(&i,&j,0);
	printf("DIRECCION i: %d j: %d\n",i,j);
	printf("SOUTH\n");
	advanceInDirection(&i,&j,2);
	printf("DIRECCION i: %d j: %d\n",i,j);
	printf("EAST\n");
	advanceInDirection(&i,&j,1);
	printf("DIRECCION i: %d j: %d\n",i,j);
	printf("WEST\n");
	advanceInDirection(&i,&j,3);
	printf("DIRECCION i: %d j: %d\n",i,j);

}

void main(char** args){
	testPosition();
}


