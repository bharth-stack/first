#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int a;
    struct stack *b;
};
struct stack * create()
{
 struct stack *p,*q;
 p=malloc(sizeof(struct stack));
 printf("enter the value ");
 scanf("%d",&p->a);
 p->b=NULL;

 while(p)
 {
     q=malloc(sizeof(struct stack));
     printf("enter the value ");
 scanf("%d",&q->a);
 if(q->a==-1){
    break;
 }
 else{
    q->b=p;
 p=q;
 }
 }
 return p;
}
void display(struct stack *p)
{
    while(p)
    {
        printf("%d",p->a);
        p=p->b;
    }
}
struct stack * push(struct stack *p, int x)
{
    struct stack *l;
    l=malloc(sizeof(struct stack));
    l->a=x;
    l->b=p;
return l;
}
struct stack * pop(struct stack *p)
{
    struct stack *q;
     if(p==NULL){
        printf("stack is underflow");
     }
     else{
    q=p;
    p=p->b;
    printf("\n%d",q->a);
    free(q);
    }
    return p;
}
int main()
{
    struct stack *h;
    h=create();
    display(h);
    h=push(h,0);
    display(h);
    h=pop(h);
    printf("\n");
    h=pop(h);
    printf("\n");
    h=pop(h);
     printf("\n");
    h=pop(h);
     printf("\n");
    h=pop(h);
    printf("\n");
     printf("\n");
    h=pop(h);
     printf("\n");
    h=pop(h);
    display(h);
    h=push(h,85);
    display(h);
}
