#include "IntroductionToAlgorithms.h"

using namespace IntroductionToAlgorithms_3rd;

void Chapter2::Example_2_1_InsertionSort(vector<int> src)
{
	vector<int> mound = src;
	int key;
	int before = 0;
	for (int card = 1; card < mound.size(); card++) {
		key = mound[card];
		before = card - 1;
		while (before >= 0 && mound[before] > key) {
			mound[before + 1] = mound[before];
			before--;
		}
		mound[before + 1] = key;
	}
	for (auto sortResult : mound) {
		cout << sortResult << endl;
	}
}