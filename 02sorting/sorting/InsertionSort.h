/* �������� Insertion Sort
 * �㷨˼�룺ͨ��������������,����δ��������,�������������дӺ���ǰɨ��,�ҵ���Ӧλ�ò�����
 * �㷨������
 *		1���ӵ�һ��Ԫ�ؿ�ʼ,��Ԫ�ؿ�����Ϊ�Ѿ�������
 *		2��ȡ����һ��Ԫ�أ����������Ԫ�������дӺ���ǰɨ��,�����Ԫ�ش�����Ԫ��,����Ԫ���Ƶ���һλ�ã�
 *		3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��,����Ԫ�ز��뵽��λ�ú�
 *		4���ܹ�����n-1��
 * �㷨������
 *		
 * ���ó�����
 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> insertionSort(vector<int> arr)
{
	int n = arr.size();
	for (int i = 1; i < n; ++i)
	{
		int tmp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
	return arr;
}