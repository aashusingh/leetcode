/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Linked-List-Cycle.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��11��01�� 15ʱ30��44��
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _LINKED_LIST_CYCLE_H_
#define _LINKED_LIST_CYCLE_H_
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	/*
	 * �ж������Ƿ��л���ʹ�ÿ���ָ����ʵ��
	 * ����1��1������ָ�룬��ָ��һ������������ָ��һ����һ��
	 * 1���������ָ������NULL����ô����϶���û�л���
	 * 2���������л�����ô����ֿ�ָ�����ָ��ָ��һ���ڵ��ʱ��
	 */
    bool hasCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( !head )
        	return false;
        ListNode *slower = head;
        ListNode *faster = head;
        while( slower && faster )
        {
        	slower = slower->next;
        	if (faster->next != NULL)
        		faster = faster->next->next;
        	else  // ��ָ�뵽��NULL������϶�û��
        		return false;
        	if(slower == faster)  // ��ָ�뷴����ָ�룬����ָ�붼ָ��һ���ڵ㣬�л���
        		return true;
        }
        if(slower != NULL && slower == faster) // �ж�һ���Ƴ�whileѭ��������
        	return true;
        return false;

    }
};
#endif  // _LINKED_LIST_CYCLE_H_
