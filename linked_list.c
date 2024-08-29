#include<stdio.h>

typedef struct node{
	int val;
	struct node* next;
}node;

node* head;

void printList(node* head){

	while(head!=NULL){
		printf("%d ",head->val);
		head = head->next;
	}
}

void insertNode(node* head){
	int k;
	node tmp;
	printf("\nEnter Value: ");
	scanf("%d",&k);
	while(head->next!=NULL) head = head->next;
	tmp.val=k;
	tmp.next=NULL;
	head->next = &tmp;
}

void main()
{
	node a,b,c,d,e;
	head=&a;
	a.val=5;
	a.next=&b;
	b.val=8;
	b.next=NULL;
	/*c.val=3;
	c.next=&d;
	d.val=2;
	d.next=&e;
	e.val=7;
	e.next=NULL;*/
	//printf("-%d-",head->val);
	//printf("-%d-",head->next->val);
	printList(head);
	insertNode(head);
	insertNode(head);
	printList(head);

}

