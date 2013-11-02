/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Best-Time-to-Buy-and-Sell-Stock2.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��11��02�� 17ʱ36��24��
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK2_H_
#define BEST_TIME_TO_BUY_AND_SELL_STOCK2_H_
#include <vector>
using std::vector;
class Solution {
    public:
        /* 
         * ֮ǰ��ö�����У����������õ��������ķ�����O(N*N)����ʱ��
         * ���ǿ������һ����������maxN�����洢�������
         * �����������������Ƶ��ģ���pos=prices.size()-1,��ʼ��һֻ��0����
         * maxN[pos]��ʾprices[pos]��prices[prices.size()-1]�⼸���������ۣ�
		 * prices[pos]����һ�����ۣ���ô�����������������
         * */
        int maxProfit(vector<int> &prices) {
            // IMPORTANT: Please reset any member data you declared, as
            // the same Solution instance will be reused for each test case.
            if(prices.size() < 2)
                return 0;
            vector<int> maxN(prices.size(), 0);
            int max = 0;
			//ע���������������pos����prices.size()֮����������
            for(int pos = prices.size() - 1; pos >= 0; pos--)
            {
                max = max < prices[pos]?prices[pos]:max;
                maxN[pos] = max;
            }
            int ret = 0;
            for(int i = 0; i < prices.size(); i++)
            {
                int temp = maxN[i] - prices[i];
                if(temp > ret)
                    ret = temp;
            }
            return ret;
        }
};
#endif  // BEST_TIME_TO_BUY_AND_SELL_STOCK2_H_
