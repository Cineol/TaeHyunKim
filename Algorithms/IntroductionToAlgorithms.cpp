#include "pch.h"
#include "IntroductionToAlgorithms.h"

void Algorithms::Practice_1_2_2()
{
	uint32_t i = 2;
	uint32_t insertionSort = 0; //삽입 정렬
	uint32_t mergeSort = 0; // 병합 정렬
	while (true) {
		insertionSort = 8 * i * i;
		mergeSort = ceil(64 * i * log2(i)); // 횟수이기 때문에 무조건 자연수이다.(올림)		
		if (insertionSort > mergeSort) {
			cout << "데이터의 갯수가 " << i << "개 이상일때 삽입 정렬이 병합 정렬보다." << endl;
			break;
		}		
		if (i == UINT32_MAX) { // 만약 uint32_t의 범위를 벗어날때까지 찾지 못했다면 
			cout << "데이터의 갯수가 2~2^32 사이에서 항상 삽입 정렬이 빠르다. "<< endl;
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
			cout << "데이터의 갯수가 " << i << "개 이상일때 알고리즘1이 알고리즘2보다 빠르다." << endl;
			break;
		}
		if (i == UINT64_MAX) {// 만약 int64_t의 범위를 벗어날때까지 찾지 못했다면 
			cout << "데이터의 갯수가 2~2^64 사이에서 항상 알고리즘2가 알고리즘1보다 빠르다. " << endl;
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
	uint64_t micro = 1e-6;
	uint64_t second = 1e+6;
	uint64_t minute = second * 60;
	uint64_t hour = minute * 60;
	uint64_t day = hour * 24;
	uint64_t month = day * 30;
	uint64_t year = day * 365;
	uint64_t century = 31556736 * 1e+8;
	vector<uint64_t> time = { second, minute, hour, day, month, year, century };
	vector<string> vecStrFunction = { "log2(n)","sqrt(n)","n","nlog2(n)","n^2","n^3","2^n","n!" };
	vector<string> vecStrUnit = { "second :", "minute :", " hour  :", "  day  :", " month :", "  year :", "century:" };

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

			//작동은 하지만 1일 이상부터 계산에 시간이 너무 오래걸림.
			//람베르트 w함수를 이용하여 구하는 방법으로 수정해야됨.
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
				cout << n-1;
				break;
			}
			}
			strIdx++;
			cout << endl;
		}
		cout << endl;
	}
}
