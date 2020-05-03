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

	char s[]="****A*BC*DEF*G*******";
	char* ss = &s[0];
	function45(&ss,strlen(s),4,7);
	puts(ss);
	return 0;
}