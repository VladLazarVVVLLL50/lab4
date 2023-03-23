#include "liste.h"

void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}
void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}

void modify_value(Node **head, Data v, int k)
{Node *aux = *head ;
 int i;
 for(i=0;i<k;i++)aux=aux->next;
 aux->val=v;

}
