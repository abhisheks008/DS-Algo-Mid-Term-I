#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	if (*sourceRef == NULL)
		return;
	struct Node* newNode = *sourceRef;
	*sourceRef = (*sourceRef)->next;
	newNode->next = *destRef;
	*destRef = newNode;
}

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
	struct Node dummy;
	dummy.next = NULL;
	struct Node* tail = &dummy;
	while (1)
	{
		if (a == NULL)
		{
			tail->next = b;
			break;
		}
		else if (b == NULL)
		{
			tail->next = a;
			break;
		}
		if (a->data <= b->data)
			MoveNode(&(tail->next), &a);
		else
			MoveNode(&(tail->next), &b);
		tail = tail->next;
	}
	return dummy.next;
}

int main(void)
{
	int keys[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(keys)/sizeof(keys[0]);
    int i;
	struct Node *a = NULL, *b = NULL;
	for (i = n - 1; i >= 0; i = i - 2)
		push(&a, keys[i]);
	for (i = n - 2; i >= 0; i = i - 2)
		push(&b, keys[i]);
	printf("First List  :  ");
	printList(a);
	printf("\nSecond List : ");
	printList(b);
	struct Node* head = SortedMerge(a, b);
	printf("\nAfter Merge : ");
	printList(head);
	return 0;
}
