#include<iostream>
#include<stdlib.h>
#include<sstream>
using namespace std;

struct final
{
	int a;
	struct final* next;
};

struct final* head = NULL;
struct final* tail = head;

void insert(int a)
{
	struct final* temp = (struct final*)malloc(sizeof(struct final));
	temp->a = (a % 10);
	a = a / 10;
	temp->next = head;
	head = temp;
	tail = temp;
	while(a != 0)
	{
		struct final* temp = (struct final*)malloc(sizeof(struct final));
		temp->a = (a % 10);
		a = a / 10;
		tail->next = temp;
		temp->next = NULL;
		tail = temp;
	}
}

void display()
{
	struct final* ptr;
	ptr = head;
	stringstream ss;
	ss<<head->a;
	string s,b;
	ss>>s;
	ptr = ptr->next;
	while(ptr != NULL)
	{
		stringstream ss;
		ss<<ptr->a;
		ss>>b;
		s = s + b;
		ptr = ptr->next;
	}
	int i;
	for(i = s.length() - 1; i >= 0; i--)
		printf("%c",s[i]);
}

void multiply(int b)
{
	int c;
	c = 0;
	struct final* ptr;
	ptr = head;
	while(ptr != NULL)
	{
		ptr->a = (ptr->a * b) + c;
		c = (ptr->a / 10);
		ptr->a = ptr->a - c * 10;
		ptr = ptr->next;
	}
	if(ptr == NULL && c != 0)
	{
		while(c != 0)
		{
			struct final* temp = (struct final*)malloc(sizeof(struct final));
			temp->a = (c % 10);
			c = c / 10;
			tail->next = temp;
			tail = temp;
			tail->next = NULL;
		}
	}
}

int main() 
{
	int T, N;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		insert(N--);
		while(N != 0)
		{
			multiply(N);
			N--;
		}
		display();
		printf("\n");
		head = NULL;
	}
	return 0;
}