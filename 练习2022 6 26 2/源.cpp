#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];//C���Գ������
	short price;
};

int main()
{
	struct Book b1 = { "C���Գ������"��55};
	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);



	return 0;
}