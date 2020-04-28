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
	int a[3][3] = { {100,200,300},{400,500,600},{700,800,900} };
	travel2((int*)a, 3, 3); 
	function18(a);
	travel2((int*)a, 3, 3);
	return 0;
}