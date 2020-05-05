#include <malloc.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include "tool.h"
#include"forinterview.h"
#include"struct_define.h"

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

char* function31And32(char* s,bool isOdd) {
	int count = strlen(s);
	char* ss = (char*)calloc(count, sizeof(char));
	int ssLocate = 0;
	for (int i = 0; i < count; i++)
	{
		if (i % 2 == isOdd && s[i] % 2 == isOdd) {
			ss[ssLocate++] = s[i];
		}
	}
	puts(ss);
	return ss;
}

void function33(char* s,int size) {
	char* ss=s;
	while (*ss != 0)
		ss++;
	ss--;

	int count = 0;
	for (count; ss[count] == '*'; count--);
	count = abs(count);

	if(count>size){
		int i = 0;
		while (i < count - size) {
			*(ss--) = 0;
			i++;
		}
	}
}

void function34(student s[],int ssize, student h[],int hsize) {
	int maxv = 0;
	for (int i = 0; i < ssize; i++)
	{
		maxv = max(maxv, s[i].score);
	}
	int j = 0;
	for (int i = 0; i < ssize; i++)
	{
		if (maxv == s[i].score) {
			h[j++] = s[i];
		}
	}
}

void function35(char* s) {
	char* ss = s;
	while (*ss != 0) {
		if (*ss == ' ')
			deleteChar(ss);
		ss++;
	}
	puts(s);
}

void function36(char* s) {
	int count = 0;
	char* ss = s;
	while (s[count]=='*')
	{
		count++;
	}
	printf("have %d * in head of string\n", count);
	for (int i = 0; i < count; i++)
	{
		char* ss = s;
		while (*ss != 0) {
			*ss = *(ss + 1);
			ss++;
		}
		*(ss - 1) = '*';
	}
}

void function37(student8s* s) {
	s->ave = (	s->score1+ 
				s->score2+ 
				s->score3+ 
				s->score4+ 
				s->score5+ 
				s->score6+ 
				s->score7+ 
				s->score8 ) / 8;
}

void function38(char* s) {
	char des;
	int count=0;
	printf("what character is you want about this string: ");
	scanf_s("%c", &des);
	while (*s != 0) {
		if (*s == des) count++;
		s++;
	}
	printf("%d", count);
}

void function39(int a[],int size,int p) {
	for (int i = 0; i <= p; i++)
	{
		int temp = a[0];
		for (int j = 0; j < size-1; j++)
		{
			a[j] = a[j + 1];
		}
		a[size - 1] = temp;
	}
}


void function40(char* a, int p) {
	int size = strlen(a);
	for (int i = 0; i < p; i++)
	{
		char temp = a[0];
		for (int j = 0; j < size - 1; j++)
		{
			a[j] = a[j + 1];
		}
		a[size - 1] = temp;
	}
}

char* function41(char* s, int m, int n) {
	int size = m * n;
	char* ans=(char*)calloc((m*n)+1,sizeof(char));
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[count++] = s[j * n + i];
		}
	}
	return ans;
}

void function42(int* a, int size,int m) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i ; j < size; j++)
		{
			a[i * size + j] *= m;
		}
	}
}

//for function 43
bool isEnd43(char* s) {
	if (strlen(s) != 4)
		return false;
	for (int i = 0; i < 4; i++)
	{
		if (s[i] != '*')
			return false;
	}
	return true;
}

void function43(char** max) {
	*max = (char*)calloc(1,sizeof(char));
	char* input = nullptr; 
	while (input==nullptr || !isEnd43(input)){
		input = (char*)calloc(1000 ,sizeof(char));
		printf("please write a new string: ");
		scanf_s("%s", input, 1000);
		if (strlen(input) > strlen(*max)) {
			*max = input;
		}
	}
	printf("********END********\n");
}

// for function 44
bool isSub44(char* p, char* s) {
	for (int i = 0; i < strlen(s); i++)
	{
		if (p[i] != s[i])
			return false;
	}
	return true;
}
int function44(char* full, char* sub) {
	int count = 0;
	while (*full != 0) {
		if (isSub44(full,sub)) {
			count++;
			full += strlen(sub);
		}
		else
			full++;
	}
	return count;
}

void function45(char** s, int n, int h, int e) {
	*s += h;
	char* ss = *s;
	while (*ss != 0) ss++;
	ss--;
	for (int i = 0; i < e; i++)
	{
		*ss = 0;
		ss--;
	}
}

void function46(student* s,int n) {
	for (int i = 0; i < n-1; i++)
	{
		bool flag=false;
		for (int j = n-1; j > i; j--)
		{
			if (s[j - 1].score < s[j].score) {
				student temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
				flag = true;
			}
		}
		if (flag == false)
			return;
	}
}

void function47(char* ss) {
	char* s = ss+1;
	char list[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (*s!=0)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = list[*s - 'a'];
		s += 2;
	}
}

int function48(int a, int b) {
	int c = 0;
	c += (a % 10) * 10;
	a /= 10;
	c += a * 1000;
	c += b % 10;
	b /= 10;
	c += b * 100;
	return c;
}

char* function49(char* s) {
	int size = strlen(s);
	char* ans = (char*)calloc(size,sizeof(char));
	int count=0;
	for (int i = 0; i < size; i++)
	{
		if (!(s[i] % 2 == 1 && i % 2 == 0)) {
			ans[count++] = s[i];
		}
	}
	return ans;
}

void function50(student* s, int n,student* max) {
	for (int i = 0; i < n; i++)
	{
		if (max->score < s[i].score) {
			*max = s[i];
		}
	}
}

void function51(int m, int* xx, int* k) {
	for (int i = 1; i < m; i++)
	{
		if (!isPrime(i))
		{
			xx[(*k)++] = i;			
		}
	}
}

char* function52(char* p1, char* p2) {
	int p1len = strlen(p1);
	int p2len = strlen(p2);
	int total = p1len + p2len + 1;
	char* ans = (char*)calloc(total, sizeof(char));
	int count = 0;
	for (int i = 0; i < p1len; i++)
	{
		ans[count++] = p1[i];
	}
	for (int i = 0; i < p2len; i++)
	{
		ans[count++] = p2[i];
	}
	return ans;
}

int* function53(int* a, int row,int col) {
	int* b = (int*)calloc(row * col, sizeof(int));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			b[i * col + j] = a[j * col + i] + a[i * col + j];
		}
	}
	return b;
}

void function54(student* s, int N,student* b,int* n) {
	int fullScore = 0;
	for (int i = 0; i < N; i++)
	{
		fullScore += s[i].score;
	}
	int ave = fullScore / N;
	*n = 0;
	for (int i = 0; i < N; i++)
	{
		if (s[i].score < ave)
			b[(*n)++] = s[i];
	}
}

int* function55(int* a, int row, int col, int* n) {
	*n = row * col;
	int* ans = (int*)calloc(*n, sizeof(int));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ans[i * col + j] = a[i * col + j];
		}
	}
	return ans;
}

void function56(char* s, char* p) {
	while (*s == '*') {
		deleteChar(s);
	}
	char* ss = s;
	while (ss != p) {
		if (*ss == '*') {
			deleteChar(ss);
			p--;
			ss--;
		}
		ss++;
	}
}

int function57(student* s, int n,student* b) {
	int up=0, down=0;
	printf("please ensure range of score(eg:0-100):");
	scanf_s("%d-%d", &down, &up);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score >= down && s[i].score <= up)
			b[count++] = s[i];
	}
	return count;
}

double function58(int n) {
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
			sum += i;
	}
	return sqrt(sum);
}

char* function59(char** p,int m) {
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		count += strlen(p[i]);
	}
	char* ans = (char*)calloc(count, sizeof(char));
	count = 0;
	for (int i = 0; i < m; i++)
	{
		char* temp = p[i];
		while (*temp != 0) {
			ans[count++] = *temp;
			temp++;
		}
	}
	return ans;
}

int function60(int a[],int n) {
	int i = 0, j = 0;
	while (i < n)
	{
		while (a[i + 1] == a[i])
		{
			i++;
		}
		a[j++] = a[i];
		i++;
	}
	return j;
}

void function61(int a[], int n, int ans[],int ansn) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 100) ans[10]++;
		else {
			ans[a[i] / 10]++;
		}
	}
}

int function62(char* s) {
	char* ss = s;
	int countword = 0;
	bool flag = false;
	while (*ss != 0) {
		if (flag == false) {
			if (*ss >= 'a' && *ss <= 'z')
			{
				flag = true;
				countword++;
				ss++;
			}
			else ss++;
		}
		else {
			if (*ss >= 'a' && *ss <= 'z') ss++;
			else {
				flag = false;
				ss++;
			}
		}
	}
	return countword;
}

int function63(int n) {
	int sum = 0;
	for (int i = 2; i <= n/2; i++)
	{
		if (n % i == 0) {
			sum += i;
			printf("%d ", i);
		}
	}
	printf("sum of factors of n is: %d", sum);
	return sum;
}

char* function64(char* s) {
	int size = strlen(s);
	char* ans = (char*)calloc(size+1, sizeof(char));
	char* ss = s;
	size = 0;
	while (*ss != 0) {
		if ((*ss) % 2 == 0)
			ans[size++] = *ss;
		ss++;
	}
	return ans;
}

//function 65 same with 48 ans 71

void function66(char* s) {
	char* ss = s;
	while (*ss != 0) {
		if (*ss == '*') {
			deleteChar(ss);
			ss--;
		}
		ss++;
	}
}

studentc* function67(studentc* s,int n,char* sid) {
	studentc* des=(studentc*)calloc(1,sizeof(studentc));
	*(des->id) = 0;
	des->score = -1;
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", s[i].id);
		if (!strcmp(s[i].id, sid))
		{
			des = &s[i];
		}
	}
	return des;
}

double function68(int n) {
	double factorial=1;
	double Sn = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		Sn += (1 / factorial);
	}
	return Sn;
}

int function69(int t) {
	int f0 = 0,f1=1;
	int res = 1;
	while (f1<t) {
		res = f0 + f1;
		f0 = f1;
		f1 = res;
	}
	return f1;
}

double function70(int n) {
	double up = 1;
	double down = 1;
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		s += (up / (down * (down + 1)));
		down++;
	}
	return s;
}

//function 71 same with 48 ans 65

char* function72(char* s) {
	int size = strlen(s)+1;
	char* ans = (char*)calloc(size, sizeof(char));
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 1)
			ans[count++] = s[i];
	}

	return ans;
}

void function73(char* s,char* p) {
	while (*s == '*')
		s++;
	while (*p == '*')
		p--;
	char* ss = s;
	while (ss != p) {
		if (*ss == '*')
			deleteChar(ss);
		ss++;
	}
}

//function 74 same with 34
//function 75 same with 41

double function76(double x) {
	if (x >= 0.97) {
		printf("x over 0.97\n");
		return 0;
	}
	double Sn = 1,Snpre=0;
	double n = 0;
	while (fabs(Sn - Snpre) >= 0.000001) {
		n++;
		Snpre = Sn;
		double up=0.5;
		for (int i = 1; i < n; i++)
		{
			up *= (0.5 - i);
		}
		double down = 1;
		for (int i = 1; i <= n; i++)
		{
			down *= i;
		}
		Sn += (up / down)*powf(x,n);
	}
	return Sn;
}

//function 77 same with 48,71 ans 65

char* function78(char* s) {
	int size = strlen(s);
	char* ans = (char*)calloc(size + 1, sizeof(char));
	char* ss = s;
	size = 0;
	while (*ss != 0) {
		if ((*ss) % 2 == 1)
			ans[size++] = *ss;
		ss++;
	}
	return ans;
}

//function 79 same with 50

void function80(int* a,int row,int col,int n) {
	for (int i = 0; i < N11; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			a[i*col+j] *= n;
		}
	}
}