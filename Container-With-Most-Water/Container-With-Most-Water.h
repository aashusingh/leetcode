/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Container-With-Most-Water.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��11��03�� 23ʱ49��52��
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _CONTAINER_WITH_MOST_WATER_H_
#define _CONTAINER_WITH_MOST_WATER_H_
#include <vector>
#include <iostream>
using std::vector;
class Solution {
public:
    /* 
     * ����һ��˫ָ��/�������ڵ����ͣ�����������ָ���һ��������������ɨ�衣
     * ɨ�跽ʽ���Բ�ͬ�ٶȴ�ͷ��βɨ�裬���߷ֱ��ͷ��β���м�ɨ�衣
     * �������򵥵��������õ�һ��ɨ�跽ʽ������forѭ�������Ӷ�O(N^2),����leetcode�жϳ�ʱ��
     * ����Ľⷨʹ���˷ֱ��ͷ��β���м�ɨ��ķ�ʽ�����Ӷ�ΪO(N),��Ҫע������ж���ֹ������
     *
     * */
    int maxArea(vector<int> &height) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
    	if(height.size() < 2)
    		return 0;
    	int maxArea = 0; 
    	int tempArea = 0;
    	int left = 0, right = height.size() - 1;
    	while( left < right)
    	{
            //ˮ���ص������Ǳ���һ�����Σ�����С��height��������Ϊ���εĸ�
    		tempArea = (right - left)*std::min(height[left], height[right]);
    		maxArea = std::max(tempArea, maxArea);

            //�������δ���Ĺؼ��㣬ָ����ƶ�����
    		if(height[left] <= height[right])
    			left++;
    		else
    			right--;
    	}
    	return maxArea;
    }
};
#endif  // _CONTAINER_WITH_MOST_WATER_H_
