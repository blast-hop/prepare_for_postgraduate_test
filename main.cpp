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
	int a[3][3] = { {1,9,7},{2,3,8},{4,5,6} };
	function80(&a[0][0], 3, 3, 3);
	travel2(&a[0][0], 3, 3);
	return 0;
}