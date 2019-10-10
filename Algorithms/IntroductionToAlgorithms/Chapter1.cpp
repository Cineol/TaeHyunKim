#include "IntroductionToAlgorithms.h"

using namespace IntroductionToAlgorithms_3rd;

void Chapter1::Practice_1_2_2()
{
	uint32_t i = 2;
	uint32_t insertionSort = 0; //���� ����
	uint32_t mergeSort = 0; // ���� ����
	while (true) {
		insertionSort = 8 * i * i;
		mergeSort = ceil(64 * i * log2(i)); // Ƚ���̱� ������ ������ �ڿ����̴�.(�ø�)		
		if (insertionSort > mergeSort) {
			cout << "�������� ������ " << i << "�� �̻��϶� ���� ������ ���� ���ĺ���." << endl;
			break;
		}
		if (i == UINT32_MAX) { // ���� uint32_t�� ������ ��������� ã�� ���ߴٸ� 
			cout << "�������� ������ 2~2^32 ���̿��� �׻� ���� ������ ������. " << endl;
			break;
		}
		i++;
	}

}
void Chapter1::Practice_1_2_3()
{
	uint64_t i = 1;
	uint64_t algorithm1 = 0;
	uint64_t algorithm2 = 0;
	while (true) {
		algorithm1 = 100 * i * i;
		algorithm2 = pow(2, i);
		if (algorithm2 > algorithm1) {
			cout << "�������� ������ " << i << "�� �̻��϶� �˰���1�� �˰���2���� ������." << endl;
			break;
		}
		if (i == UINT64_MAX) {// ���� int64_t�� ������ ��������� ã�� ���ߴٸ� 
			cout << "�������� ������ 2~2^64 ���̿��� �׻� �˰���2�� �˰���1���� ������. " << endl;
			break;
		}
		i++;
	}

}
inline uint64_t factorial(uint64_t n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (n*factorial(n - 1));
}
void Chapter1::Problems_1_1()
{
	uint64_t micro = 1e-6;
	uint64_t second = 1e+6;
	uint64_t minute = second * 60;
	uint64_t hour = minute * 60;
	uint64_t day = hour * 24;
	uint64_t month = day * 30;
	uint64_t year = day * 365;
	uint64_t century = day * 36524;
	vector<uint64_t> time = { second, minute, hour, day, month, year, century };
	vector<string> vecStrFunction = { "log2(n)","sqrt(n)","n","nlog2(n)","n^2","n^3","2^n","n!" };
	vector<string> vecStrUnit = { "second :",	"minute :", " hour  :", "  day  :", " month :", "  year :", "century:" };

	for (int i = 0; i < vecStrFunction.size(); i++) {
		int strIdx = 0;
		cout << vecStrFunction[i].c_str() << endl;
		for (auto t : time) {
			cout << vecStrUnit[strIdx];
			switch (i) {
			case 0:
				cout << 2 << "^(" << pow(10, log10(t)) << ")";
				break;
			case 1:
				cout << pow(t, 2);
				break;
			case 2:
				cout << double(t);
				break;
				//TODO : �۵��� ������ 1�� �̻���� ��꿡 �ð��� �ʹ� �����ɸ�.
				//������Ʈ w�Լ��� �̿��Ͽ� ���ϴ� ������� �����ؾߵ�.
			case 3:
			{
				//int n = 1;
				//while (true) {
				//	if (t < n*log2(n)) break;
				//	else n++;
				//}
				//cout << n-1;
				break;
			}

			case 4:
				cout << sqrt(t);
				break;
			case 5:
				cout << cbrt(t);
				break;
			case 6:
				cout << log2(t);
				break;
			case 7:
			{
				int n = 1;
				while (true) {
					if (t < factorial(n)) break;
					else n++;
				}
				cout << n - 1;
				break;
			}
			}
			strIdx++;
			cout << endl;
		}
		cout << endl;
	}
}