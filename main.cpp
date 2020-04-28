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
	int temp = 5923;
	while (temp%10 > 0){
		printf("%d\n",temp);
		temp = function15(temp);
	}
	return 0;
}