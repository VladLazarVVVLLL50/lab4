#include "liste.h"


int main()
{int *v=NULL;
 int n,i,x;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {scanf("%d",&x);
  addAtEnd(&v,x);
 }
 display(v);


    return 0;
}