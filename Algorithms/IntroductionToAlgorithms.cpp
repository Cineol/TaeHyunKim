#include "pch.h"
#include "IntroductionToAlgorithms.h"

void Algorithms::Practice_1_2_2()
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
			cout << "�������� ������ 2~2^32 ���̿��� �׻� ���� ������ ������. "<< endl;
			break; 
		}
		i++;
	}
	
}
void Algorithms::Practice_1_2_3()
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
void Algorithms::Problems_1_1()
{
	auto a = factorial(10);
	auto a1 = factorial(20);
	auto a2 = factorial(30);
	auto a3 = factorial(40);
	auto a4 = factorial(50);
	double micro = 1e-6;//0.000001
	double second = (double)1/60;
	double minute = second * 60;
	double hour = minute * 60;
	double day = hour * 24;
	double month = day * 30;
	double year = day * 365;
	double century = year * 100;
	vector<double> time = { second, minute, hour, day, month, year, century };
	uint64_t func_log2_N = 1;
	uint64_t func_sqrt_N = 1;
	uint64_t func_N = 1;
	uint64_t func_N_log2_N = 1;
	uint64_t func_NxN = 1;
	uint64_t func_NxNxN= 1;
	uint64_t func_pow2_N = 1;
	uint64_t func_N_pactorial = 1;
	vector<uint64_t> function = { func_log2_N, func_sqrt_N, func_N, func_N_log2_N, func_NxN, func_NxNxN, func_pow2_N, func_N_pactorial };
	vector<string> strFunction = { "log2(n)","sqrt(n)","n","nlog2(n)","n^2","n^3","2^n","n!" };
	int i = 0;
	for (auto f : function){
		cout << strFunction[i].c_str();
		for (auto t : time) {
			switch (i) {
			case 0:
				cout << log2(f * t) << "\t\t";
				break;
			case 1:
				cout << sqrt(f * t) << "\t\t";
				break;
			case 2:
				cout << f * t << "\t\t";
				break;
			case 3:
				cout << f * t * log2(f * t) << "\t\t";
				break;
			case 4:
				cout << pow(f * t, 2) << "\t\t";
				break;
			case 5:
				cout << pow(f * t, 3) << "\t\t";
				break;
			case 6:
				cout << pow(2, f * t) << "\t\t";
				break;
			case 7:
				cout << factorial((int)f * t) << "\t\t";
				break;
			}			
		}
		cout << endl;
		i++;
	}
}
