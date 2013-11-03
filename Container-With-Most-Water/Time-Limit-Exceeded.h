/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Container-With-Most-Water.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��11��03�� 23ʱ30��01��
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
     * ��Ϊˮ�����ԣ��������������Ծ��δ��ڵģ�������С��height���Ǹ�
     * ��򵥵ķ�������������forѭ����ö�����е����height���ұ�height���������������ó���������
     * ����㷨���Ӷ�O(N^2)��leetcodeƽ̨�ж�ΪTime Limit Exceeded��ʱ��
     * */
    int maxArea(vector<int> &height) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(height.size() < 2)
        	return 0;
        int maxArea = 0;
        int tempArea = 0;
        for(int left = 0; left < height.size() - 1; left++)
        {
        	for(int right = left + 1; right < height.size(); right++)
        	{
        		tempArea =std::min(height[left], height[right]) * (right - left);
        		if(tempArea > maxArea)
        			maxArea = tempArea;
        	}
        }
        return maxArea;
    }
};
#endif  // _CONTAINER_WITH_MOST_WATER_H_
