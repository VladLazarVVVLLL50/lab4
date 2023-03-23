#include "liste.h"


int main()
{Node *v=NULL;
 int n,i,x,j=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {scanf("%d",&x);
  addAtEnd(&v,x);
 }

 Node *aux=v;

 int k,value;

 scanf("%d",&k);
 for(i=0;i<k-1;i++)aux=aux->next;
 Node *nou=(Node*)malloc(sizeof(Node));
 scanf("%d",&value);
 nou->val=value;
 nou->next=aux->next;
 aux->next=val;
 n++;

 for(i=0;i<n-1;i++)
 {Node *aux1=aux->next;
 int sum=0;
  for(j=i+1;j<n;j++)
  {
   sum+=aux1->val;
   aux1=aux1->next;
  }
   modify_value(&v,sum+aux->val,i);
   aux=aux->next;
 }

 display(v);


    return 0;
}
