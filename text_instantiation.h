#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "arralloc.h"
#include "uni.h"
#include "percolate.h"

class AFX_EXT_CLASS cplus {

public:
	cplus();
	~cplus();
public:
	int L;
	int** map;
	float rho;
	int seed;
	int MAX;
	char* datafile;
	char* percfile;
public:
	void test_input(int** map,char* datafile,char* percfile);
	void test_map();
	void test_file();
};