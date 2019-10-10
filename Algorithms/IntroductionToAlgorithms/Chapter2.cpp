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

void Chapter2::Practice_2_1_2_InsertionSort(vector<int> src)
{
	vector<int> mound = src;
	int key;
	int after = 0;
 	for (int card = mound.size()-1; card > 0; card--) {
		key = mound[card-1];
		after = card;
		while (after <=mound.size()-1 &&mound[after]>key) {
			mound[after-1] = mound[after];
			after++;
		}
		mound[after-1] = key;
	}
	for (auto sortResult : mound) {
		cout << sortResult << enld;
	}
}
