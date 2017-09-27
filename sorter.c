#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorter.h"
#include "mergesort.c"

typedef struct movies[5044]; //Number of rows in .csv file 

int main (int argc, char * argv[]) { 
	FILE * fp; //opens .csv to be read
	fp = stdin; 

	if (argc != 3 || strcmp(argv[1],"-c") != 0) {
        fprintf("Your argument must be in the following format: cat input.file | ./sorter -c  movie_title > output.file");
    } 
}
