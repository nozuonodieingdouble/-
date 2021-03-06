访问单个节点的删除
题目描述：
实现一个算法，删除单向链表中间的某个结点，假定你只能访问该结点。
给定带删除的节点，请执行删除操作，若该节点为尾节点，返回false，否则返回true


struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

bool removeNode(ListNode* pNode) {
	if (NULL == pNode || NULL == pNode->next)
		return false;
	ListNode* pNext = pNode->next;
	pNode->val = pNext->val;
	pNode->next = pNext->next;
	free(pNext);
	pNext = NULL;
	return true;
}
