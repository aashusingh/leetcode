/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��11��03�� 23ʱ43��03��
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include "Container-With-Most-Water.h"
using namespace std;
int main()
{
    Solution s;
    vector<int> height;
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    cout<<s.maxArea(height)<<endl;

    return 0;
}
