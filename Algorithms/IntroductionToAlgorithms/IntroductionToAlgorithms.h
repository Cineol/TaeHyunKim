#pragma once
#include <math.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
namespace IntroductionToAlgorithms_3rd {
	namespace Chapter1 {
		/**
		* @question 동일한 기계에서 삽입 정렬과 병합정렬의 구현 결과를 비교한다고 가정하자. n개의 입력에 대해 삽입정렬은 8n^2번을, 병합정렬은 64*n*log2(n)번을 계산하고 각각 종료한다.
		*			n값이 얼마일 때 삽입 정렬이 병합 정렬보다 빠를까?
		* @constraints 정렬할 데이터는 2개 이상이다.
		*/
		void Practice_1_2_2();
		/**
		* @question 동일한 기계에서 수행시간이 100n^2인 알고리즘은 수행시간이 2^n인 알고리즘보다 빨라지는 n의 최솟값은 얼마인가?
		* @constraints n는 1보다 크다.
		*/
		void Practice_1_2_3();
		/**
		* @question 다음 각각의 함수가 t시간에 풀 수 있는 문제의 최대 크기 n을 구하여라. 이때 각 알고리즘은 마이크로초(1e-06)가 걸린다고 가정한다.
		* 함수(function) : log2(n), sqrt(n), n, n*log2(n), n^2, n^3, 2^n, n!
		* 시간(time) : 1second, 1minute, 1hour, 1day, 1month, 1year, 1century
		* @constraints 1월은 30일이며, 1년은 365일, 1세기는 36524일 이다.
		*/
		void Problems_1_1();
	}
	namespace Chapter2 {
		/**
		* @question 크기가 작은 정렬에 효율적인 삽입 정렬 알고리즘으로 시작해보자. 카드놀이를 할 때 손에 쥔 카드를 정렬하는 과 방법이 같다. 왼손에 순서가 랜덤인 카드를 쥐고 있고
		*			맨 왼쪽 카드부터 한칸 오른쪽 카드와 비교하여 위치를 바꿔주면 된다.
		*/
		void Example_2_1_InsertionSort(vector<int> src);
		/**
		* @question 오름차순 대신 내림차순으로 정렬하도록 Insertion-Sort를 재 작성하라.
		*/
		void Practice_2_1_2_InsertionSort(vector<int> src);
	}
}
