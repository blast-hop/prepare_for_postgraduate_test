#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include"SolutionHead.h"
#include"struct_define.h"
#include"tool.h"
#include"forinterview.h"
int main() 
{
	int a[][7] = { {1,2,56,4,3,7,34},{7,6,5,38,3,8,2}};
	printf("%d", function30(&a[0][0], 2, 7));
	return 0;
}