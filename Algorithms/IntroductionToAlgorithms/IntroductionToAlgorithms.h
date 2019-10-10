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
		* @question ������ ��迡�� ���� ���İ� ���������� ���� ����� ���Ѵٰ� ��������. n���� �Է¿� ���� ���������� 8n^2����, ���������� 64*n*log2(n)���� ����ϰ� ���� �����Ѵ�.
		*			n���� ���� �� ���� ������ ���� ���ĺ��� ������?
		* @constraints ������ �����ʹ� 2�� �̻��̴�.
		*/
		void Practice_1_2_2();
		/**
		* @question ������ ��迡�� ����ð��� 100n^2�� �˰����� ����ð��� 2^n�� �˰��򺸴� �������� n�� �ּڰ��� ���ΰ�?
		* @constraints n�� 1���� ũ��.
		*/
		void Practice_1_2_3();
		/**
		* @question ���� ������ �Լ��� t�ð��� Ǯ �� �ִ� ������ �ִ� ũ�� n�� ���Ͽ���. �̶� �� �˰����� ����ũ����(1e-06)�� �ɸ��ٰ� �����Ѵ�.
		* �Լ�(function) : log2(n), sqrt(n), n, n*log2(n), n^2, n^3, 2^n, n!
		* �ð�(time) : 1second, 1minute, 1hour, 1day, 1month, 1year, 1century
		* @constraints 1���� 30���̸�, 1���� 365��, 1����� 36524�� �̴�.
		*/
		void Problems_1_1();
	}
	namespace Chapter2 {
		/**
		* @question ũ�Ⱑ ���� ���Ŀ� ȿ������ ���� ���� �˰������� �����غ���. ī����̸� �� �� �տ� �� ī�带 �����ϴ� �� ����� ����. �޼տ� ������ ������ ī�带 ��� �ְ�
		*			�� ���� ī����� ��ĭ ������ ī��� ���Ͽ� ��ġ�� �ٲ��ָ� �ȴ�.
		* @constraints 
		*/
		void Example_2_1_InsertionSort(vector<int> src);
	}
}