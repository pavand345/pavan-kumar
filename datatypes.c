#include<stdio.h>
int main()
{
	char c;
	signed int si;
	unsigned int ui;
	short int hi;
	long int li;
	long long int lli;
	float f;
	double d;
	long double ld;


	printf("size of char  		=%ld\n",sizeof(c));
	printf("size of signed int	=%ld\n",sizeof(si));
	printf("size of unsigned int	=%ld\n",sizeof(ui));
	printf("size of short int	=%ld\n",sizeof(hi));
	printf("size of long int	=%ld\n",sizeof(li));
	printf("size of long long int	=%ld\n",sizeof(lli));
	printf("size of float		=%ld\n",sizeof(f));
	printf("size of double		=%ld\n",sizeof(d));
	printf("size of long double	=%ld\n",sizeof(ld));
}

