#include "text_instantiation.h"

void test_input(int** map, char* datafile, char* percfile){
	
	datafile = (char*)malloc(sizeof(char) * 100);
	printf("输入datefile(英文名）\n");
	scanf("%s", datafile);
	percfile = (char*)malloc(sizeof(char) * 100);
	printf("输入percfile（英文名）\n");
	scanf("%s", percfile);
}
void test_map(){
	map = (int**)arralloc(sizeof(int), 2, L + 2, L + 2);

	int nfill;
	int i, j;
	float r;
	for (i = 0; i<L + 2; i++)
	{
		for (j = 0; j<L + 2; j++)
		{
			map[i][j] = 0;
		}
	}

	nfill = 0;
	for (i = 1; i <= L; i++)
	{
		for (j = 1; j <= L; j++)
		{
			if (map[i][j] != 0)
			{
				nfill++;
				map[i][j] = nfill;
			}
		}
	}

	int loop, nchange, old;
	loop = 1;
	nchange = 1;
	while (nchange > 0)
	{
		nchange = 0;
		for (i = 1; i <= L; i++)
		{
			for (j = 1; j <= L; j++)
			{
				if (map[i][j] != 0)
				{
					old = map[i][j];
					if (map[i - 1][j] > map[i][j]) map[i][j] = map[i - 1][j];
					if (map[i + 1][j] > map[i][j]) map[i][j] = map[i + 1][j];
					if (map[i][j - 1] > map[i][j]) map[i][j] = map[i][j - 1];
					if (map[i][j + 1] > map[i][j]) map[i][j] = map[i][j + 1];
					if (map[i][j] != old)
					{
						nchange++;
					}
				}
			}
		}
		printf("Number of changes on loop %d is %d\n", loop, nchange);
		loop++;
	}

}
void test_file(){
	printf("Opening file <%s>\n", datafile);
	FILE *fp;
	fp = fopen(datafile, "w");
	fclose(fp);

	printf("Opening file <%s>\n", percfile);
	fp = fopen(percfile, "w");
	fclose(fp);
}