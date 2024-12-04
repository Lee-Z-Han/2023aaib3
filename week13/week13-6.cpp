// week13-6.cpp 學習計畫 Linked List 第2題
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; //用陣列，存 Linked List 的 val值
        while(head != nullptr){ //只要還有東西
            a.push_back(head->val); //就把值，先塞入陣列
            head = head->next; //換下一個
        }
        ListNode * ans = new ListNode(); //準備好新的 ListNode()
        ListNode * now = ans; //現在要處理的 ListNode 是 ans 往下走
        for(int i=a.size()-1;i>=0;i--){ //反過來的陣列
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */