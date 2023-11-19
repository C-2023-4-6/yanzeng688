#include<iostream>
using namespace std;
int main()
{
	//苹果每个0.8元，第一天买2个，第二天开始，每天买前天的2倍，直到单天购买的苹果数不超过100的最大值
	//求每天平均花多少钱
	int i;
	double p = 0.8, sum, ep, m;
	sum = 0;
	m = 1;
	for (i = 2; i <= 100; i = i * 2)
	{
		sum = sum + p * i;
		ep = sum / (m);
		m++;
	}
	cout << "It took " << (m - 1) << " days\n" << "all-in cost :  " << sum << " yuan" << endl;
	cout << "Average daily cost: " << ep << " yuan." << endl;

	return 0;
}