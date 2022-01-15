Problem Link :https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#

void linkdelete(struct Node  *head, int M, int N)
    {
        if(head == nullptr)return ;
        Node *head1=nullptr,*ptr1=nullptr,*ptr = head,*temp= nullptr;
        if(N==0)return;
        if(M==0){head=nullptr;return;}
        while(ptr !=nullptr && head !=nullptr)
        {  ptr = head;
            int i=0;
            while(ptr != nullptr && i<M-1)
            {ptr = ptr->next;
                i++;
            }
            if(head1==nullptr)
            {
                head1 = head;
            }
            else{
                ptr1->next = head;
            }
            ptr1 =ptr;
            if(ptr!=nullptr){
            head = ptr->next;
            ptr->next = nullptr;
            int j=0;
            while(head !=nullptr && j<N-1)
            {
                head = head->next;j++;
            }
           if(head !=nullptr){ temp = head->next;
            head->next = nullptr;
            head = temp;}
            }
        }
        head =head1;
        ptr1=nullptr;
    }
