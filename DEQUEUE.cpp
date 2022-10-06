#include<stdio.h>
#include<conio.h>

struct item
{
	int data;
	struct dequeueitem *next;
};
    struct dequeue
  {
    struct dequeueitem *front;
    int size;
    struct dequeueitem *rear;
};

void dequeue(struct dequeue *dq)
{
	dq->front= null;
	dq->size= 0;
	dq->rear= null;
	}
void addfront(Struct dequeue *dq, int x)
{
	struct dequeue *ptr;
	ptr=(struct dequeueitem*)malloc(sizeof(dequeueitem));
	ptr->item=x;
	if(Empty(dq))
	{
		dq->front = ptr;
		dq->rear =ptr;
		dq->size= 1;
		return;
		}
		ptr->next = dq->front;
		dq->front = ptr;
		(dq->size)++;
}
int empty(struct dequeue *dq)
{
	if(dq->size==0);
	return;
	else
	return 0;
}
void addrear (struct dequeue *dq, int x)
{
	struct dequeue *ptr;
	ptr=(struct dequeueitem*)malloc(sizeof(dequeueitem));
	ptr->item=x;
	if(Empty(dq))
	{
		dq->front = ptr;
		dq->rear =ptr;
		dq->size= 1;
		return;
		}
		ptr->next = dq->front;
		dq->front = ptr;
		(dq->size)++;
}
int size(struct dequeue *dq )
{
	return(dq->size);
}
int deletefront (struct dequeue *dq)
{
	int x;
	struct dequeueitem *ptr;
	if(Empty (dq))
}
	printf("UNDERFLOW");
	return;
}
 x=dq->front->item;
 dq->front=null;
 tree(dq->rear);
 dq->rear=null;
 dq->size=0;
 return x;
}
else
{
	x=dq->front->item
	ptr=dq->front;
	dq->front=ptr->next;
	tree(ptr);
	(dq->size);
	return x;
}
	}
int deleterear(struct dequeue *dq)
{
	int x;
	struct dequeueitem *ptr;
	if(Empty (dq))
}
	printf("UNDERFLOW");
	return;
	} 
if(size(dq)==1)
{
	x=dq->front->item;
	dq->front=null;
	tree(dq->rear);
	dq->rear=null;
	dq->size=0;
}
return x;
else
{
	ptr=dq->front;
	while(ptr->next!=dq->rear)
	ptr=ptr->next;
	x=ptr->next->item;
	tree(dq->rear);
	ptr->next=null;
	dq->rear=ptr;
	(dq->size);
	return x;
}
}
