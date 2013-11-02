/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��11��02�� 14ʱ44��37��
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
#include <vector>
using std::vector;
class Solution {
public:
    /*
     * ͨ����Ʊ��һ�����һ�����õ��������
     * ��򵥵�˼·��ö�ٳ����е����ʱ�������ʱ�䣬�ó�ÿһ������������������
     * �����е��������ҳ��������棬���Ӷ�ΪO(N*N)
     * ����㷨��ʵ����Leetcodeƽ̨�ϲ���ͨ����TIMEOUT��˵����ҪС��O(N*N)���㷨��ʵ�֡�
     */
    int maxProfit(vector<int> &prices) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(prices.size() < 2)
        	return 0;
        int max = 0;
        for(int i = 0; i < prices.size() -1; i++)
        {
        	for(int j = i + 1; j < prices.size(); j++)
        	{
        		if(prices[i] - prices[j] > max)
        		{
        			max = prices[i] - prices[j];
        		} 
        	}
        }
        return max;
    }
};
#endif  // BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
