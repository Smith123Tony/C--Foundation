#define _CRT_SECURE_NO_WARNINGS 1

//反转链表(三指针)
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//        return NULL;
//    struct ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    n3 = n2->next;
//
//    while (n2)
//    {
//        //反转链表
//        n2->next = n1;
//
//        //往下迭代
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}

		