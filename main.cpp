#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include"SolutionHead.h"
#include"struct_define.h"
#include"tool.h"
#include"forinterview.h"
#include <corecrt_math.h>
int main() 
{
	int a[] = { 2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10 };
	int count = function60(a, 19);
	printf("%d\n", count);
	travel(a, count);
	return 0;
}