#include <stdio.h>
#include <stdlib.h>
struct node
	{
		int k;
		struct node *next;
	};


struct node * insert(struct node *head,int key)
{
	if(head==NULL)
	{
		head = (struct node *)malloc(sizeof(struct node));
//		(*head).k = 
		head->k = key;
		head->next = NULL;
		return head;
	}
	else
	{
		struct node *r;
		r=head;
		while(r->next!=NULL)
			r = r->next;
		r->next = (struct node *)malloc(sizeof(struct node));
		r = r->next;
		r->k = key;
		r->next = NULL;
		return head;
	}
}

void print_ll(struct node *h)
{
	printf("Elements in Linked list: ");
	while(h!=NULL)
	{
		printf("%d -> ",h->k);
		h = h->next;
	}
	printf("NULL\n");
	return ;
}
  
int main()
{
	struct node *head;
	head = NULL;
//	int a[] = {1,2,3,4,5,6,7,8,9,10};
//	int n_a = sizeof(a)/sizeof(a[0]),i;
	int key = 1;
	while(key==1)
	{
		printf("Enter the value of element to insert: ");
		scanf("%d",&key);
		head = insert(head,key);
		printf("Enter 1 to insert new element else any other number: ");
		scanf("%d",&key);
	}
	print_ll(head);
//	for(i=0;i<n_a;i++)
//		head = insert(head,a[i]);

}
