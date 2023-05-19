#include <stdio.h>
#include <stdlib.h>
struct link {
int data;
struct link *prev;
struct link *next;
};
void traversal(struct link *head){
    struct link *ptr = head;
    while(ptr->next!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->prev;
    }
}struct link *deleteatvalue(struct link *head,int value){
    
    struct link *p=head;
    struct link *q=head->next;
    struct link *r=q->next;
    while(q->data!=value && q!=NULL){
        p=p->next;
        q=q->next;
        r=r->next;
    }
    if(q==NULL)
    return head;
    p->next=q->next;
    r->prev=q->prev;
    free(q);
    return head;
}
int main(){
    struct link *head;
    struct link *second;
    struct link *third;
    struct link *fourth;
    head=(struct link *)malloc(sizeof(struct link));
    second=(struct link *)malloc(sizeof(struct link));
    third=(struct link *)malloc(sizeof(struct link));
    fourth=(struct link *)malloc(sizeof(struct link));
    head->data=10;
    head->prev=NULL;
    head->next=second;
    second->data=20;
    second->prev=head;
    second->next=third;
    third->data=30;
    third->prev=second;
    third->next=fourth;
    fourth->data=40;
    fourth->prev=third;
    fourth->next=NULL;
    head = deleteatvalue(head,30);
    traversal(head);
    return 0;
}