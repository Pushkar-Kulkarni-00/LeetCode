struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head=NULL, *tail=NULL;
    int c=0;

    while(l1!=NULL || l2!=NULL){
        int v1 = (l1 ? l1->val : 0);
        int v2 = (l2 ? l2->val : 0);

        int sum = v1 + v2 + c;
        c = sum / 10;

        struct ListNode *nn = (struct ListNode*)malloc(sizeof(struct ListNode));
        nn->val = sum % 10;
        nn->next = NULL;

        if(head==NULL){  
            head=nn;
            tail=nn;
        }else{           
            tail->next=nn;
            tail=nn;
        }

        if(l1) l1=l1->next;
        if(l2) l2=l2->next;
    }

    if(c>0){   
        struct ListNode *nn=(struct ListNode*)malloc(sizeof(struct ListNode));
        nn->val=c;
        nn->next=NULL;
        tail->next=nn;
    }

    return head;
}
