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
	char a[100] = { 0 };
	char b[100] = { 0 };
	scanf_s("%s", a, 100);
	printf("first:%s\n", a);
	scanf_s("%s", b, 100);
	printf("second:%s\n", b);
	char* res=function25(a,b);
	puts(res);
	return 0;
}