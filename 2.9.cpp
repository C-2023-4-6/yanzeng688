#include<iostream>
using namespace std;
int main()
{
	//ƻ��ÿ��0.8Ԫ����һ����2�����ڶ��쿪ʼ��ÿ����ǰ���2����ֱ�����칺���ƻ����������100�����ֵ
	//��ÿ��ƽ��������Ǯ
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