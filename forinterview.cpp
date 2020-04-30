#include <malloc.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include "tool.h"
#include"forinterview.h"

int function1(int* source,int sourceSize,int* destination,int destinationSize) {
	float sum=0, average=0;
	for (int i = 0; i < sourceSize; i++) {
		sum += (float)source[i];
	}
	average = sum / sourceSize;
	int count = 0;
	for (int i = 0; i < sourceSize; i++)
	{
		if (source[i] < average)
			destination[count++] = source[i];
	}
	return count;
}

int function2(int* result) {
	int count=0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 7 == 0 && i % 11 == 0)
			result[count++] = i;
	}
	return count;
}

void function3(int x, int pp[], int* n) {
	*n = 0;
	for (int i = 1; i <= x / 2; i += 2) {
		if (x % i  == 0)
			pp[(*n)++] = i;
	}
}

void function4(char* tt,int pp[]) {
	while (*tt != 0) {
		if (*tt >= 'a' && *tt <= 'z')
			pp[*tt - 'a']++;
		tt++;
	}
}

void function5(int m, int k, int xx[]) {
	while (k > 0) {
		if (isPrime(++m)) {
			xx[--k] = m;
		}
	}
}

void function6(char a[], char b[], int n) {
	int i = 0,j=0;
	while (a[i] != 0) {
		if ((i) != n)
			b[j++] = a[i++];
		else
			i++;
	}
}

int function7(int* s, int t, int* k) {
	int maxSite = 0;
	for (int i = 1; i < t; i++) {
		if (s[maxSite] < s[i])
			maxSite = i;
	}
	*k = s[maxSite];
	return maxSite;
}

double function8(int n) {
	double S=1;
	int sum=1;
	for (int i = 2; i <= n; i++) {
		sum += i;
		S +=(double) 1 / sum;
	}
	return S;
}

double function9(int m,int n) {
	int m_n = 0;
	int mr = 1;
	int nr = 0;
	for (int i = 1; i <= m; i++) {
		mr *= i;
		if (i == n)
			nr = mr;
		if (i == m - n)
			m_n = mr;
	}
	return mr / (nr * m_n);
}

double function10() {
	double x0=0, x1=0;	
	do{
		x0 = x1;
		x1 = cos(x0);
	}while (fabs(x0 - x1) > 0.000001);
	return x1;
}


void function11(int a[][N11]) {
	for (int i = 0; i < N11; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			a[i][j] = 0;
		}
	}
	for (int i = 0; i < N11; i++)
	{
		travel(a[i], N11);
	}
}

double function12(int a[][N12]) {
	int num = N12 * 4 - 4,sum=0;
	printf("num:%d\n", num);
	for (int j = 0; j < N12; j++)
	{
			sum += a[0][j]+a[N12-1][j];
	}
	
	for (int i = 1; i < N12-1; i++)
	{
		sum += a[i][0] + a[i][N12 - 1];
	}
	printf("sum:%d\n", sum);
	return (double)sum / num;
}

void function13(int tt[M13][N13], int pp[N13])
{
	for (int i = 0; i < N13; i++)
	{
		pp[i] = INT_MAX;
		for (int j = 0; j < M13; j++)
		{
			pp[i] = min(pp[i], tt[j][i]);
		}
		printf("%d:%d \n", i,pp[i]);
	}
}

int function14(int a[][N14]) {
	int sum = 0;
	for (int j = 0; j < N12; j++)
	{
		sum += a[0][j] + a[N12 - 1][j];
	}

	for (int i = 1; i < N12 - 1; i++)
	{
		sum += a[i][0] + a[i][N12 - 1];
	}
	printf("sum:%d", sum);
	return sum;
}

unsigned function15(unsigned w) {
	int site = 0, temp = 0;
	while (w>=10)
	{
		temp += (w % 10)*pow(10,site);
		w /= 10;
		site++;
	}
	return temp;
}

float function16(double h) {
	return (float)((long)((h * 1000 + 5) / 10)) / 100;
}

void function17(char* s) {
	int num=0;
	char* rear=s;
	while (*rear != 0) {
		++num;
		++rear;
	}
	--rear;
	--num;
	for (int i = 0; i < num/2; i++)
	{
		s[i] += s[num - i];
		s[num - i] = s[i] - s[num - i];
		s[i] -= s[num - i];
	}
}

void function18(int a[3][3]) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			a[i][j] += a[j][i];
			a[j][i] = a[i][j] - a[j][i];
			a[i][j] -= a[j][i];
		}
	}
}

void function19(char* s) {
	int count = 0;
	while (s[count] != 0)
		count++;
	char* des = (char*)calloc(count, sizeof(char));
	for (int i = 0,j=0; i < count; i++)
	{
		if (s[i] != 'n')
			des[j++] = s[i];
	}
	des[count] = 0;
	printf("%s", des);
}

int function20(int lim, int aa[],int max) {
	int j = 0;
	for (int i = 1; i < lim; i++)
	{
		if (isPrime(i))
			aa[j++] = i;
	}
	travel(aa, j);
	return j;
}

// For function21
int Comp(const void* p1, const void* p2)
{
	return strcmp((char*)p2, (char*)p1);
}
void function21(char* String) {
	char* s = String + 1;
	int count = 0;
	while (s[count] != 0)
		count++;
	char rear = s[--count];
	qsort(s, count, sizeof(char),Comp);
}

int function22(LinkList h) {
	int maxValue = 0;
	while (h != NULL) {
		maxValue = max(maxValue, h->data);
		h = h->next;
	}
	return maxValue;
}

bool function23(char* s) {
	int count = strlen(s);
	for (int i = 0; i < count/2; i++)
	{
		if (s[i] != s[count - i - 1])
			return false;
	}
	return true;
}

long function24(char* s) {
	int flag = 1;
	if (*s == '-') {
		flag = -1;
		s++;
	}
	int ans=0;
	while (*s != 0) {
		ans *= 10;
		ans += (*s) - '0';
		s++;
	}
	return ans*flag;
}


char* function25(char* a,char* b) {

	int acount = 0;
	while (a[acount] != 0)
		acount++;
	int bcount = 0;
	while (b[bcount] != 0)
		bcount++;
	printf("a=%d:b=%d\n",acount,bcount);
	return acount >= bcount ? a : b;
}

void function26(float precision) {
	double ans_half = 0, new_ans_half = 1;
	int upnum = 1;
	int downnum = 3;
	long long numerator = 1;
	long long denominator = 1;
	do{
		ans_half = new_ans_half;
		numerator = numerator * upnum;
		upnum += 1;
		denominator = denominator * downnum;
		downnum += 2;
		double temp = (double)numerator / denominator;
		new_ans_half = ans_half + temp;
		printf("new answer is %0.10f, percision is %f\n", 2 * new_ans_half, 2 * (new_ans_half - ans_half));
	}while (2 * (new_ans_half - ans_half) > precision);

}

//function27 is same with function2

void function28(int* a, int size,int* value, int* locate) {
	*value = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (*value - a[i] < 0) {
			*value = a[i];
			*locate = i;
		}
	}
	*value = *value;
}

void function29(char* ss) {
	char list[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* s=ss;
	int count = 0;
	while (*s!=0)
	{
		if (*s>='a' && *s<='z' && count % 2 == 1) {
			*s = list[*s - 'a'];
		}
		count++;
		s++;
	}
}

int function30(int* a, int row, int col) {
	int maxv = INT_MIN;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			maxv = max(maxv, a[i*col+j]);
		}
	}
	return maxv;
}