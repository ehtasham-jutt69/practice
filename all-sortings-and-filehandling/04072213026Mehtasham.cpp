#include <iostream>
#include<random>
#include<time.h>
#include<fstream>
#include<chrono>
using namespace std;

void selct_sorting(int arr[])
{
	int brr[5];
	for (int i = 0; i < 5 - 1;i++)
	{
		int min = i;
		for (int j = i + 1; j < 5;j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			swap(arr[i], arr[min]);
		}
	}
	cout << " Sorted array B via selection  " << endl;
	for (int i = 0;i < 5;i++)
	{
		brr[i] = arr[i];
		cout << brr[i] << " ";
	}
	cout << endl;
}
void Bubble_sort(int arr[])
{
	int brr[5];
	int b = 0;
	int a = 1;
	while (a < 5)
	{
		for (int i = 0;i < 5 - a; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				b++;
			}              // incrementing b to check later is it sorted array or not  
		}
		a++;



		if (b == 0)
		{
			cout << " array is already sorted " << endl;
			break;
		}
	}
	if (b != 0)
	{
		cout << " Bubble sorted array B : " << endl;

		for (int i = 0;i < 5;i++)
		{
			brr[i] = arr[i];
			cout << brr[i] << " ";
		}
		cout << endl;
	}
}

void insertion_sort(int arr[])
{
	int brr[5];
	for (int i = 1;i < 5;i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (arr[j] > key  &&  j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	cout << " sorted array B via insertion  " << endl;

	for (int i = 0;i < 5;i++)
	{
		brr[i] = arr[i];
		cout << brr[i] << " ";
	}
	cout << endl;
}






int main()
{

	int avg = 0;
	int arr1[5];
	srand(time(0));

	ofstream csvfile("myfile.csv", ios::out);
	for (int i = 0;i < 10;i++)
	{
		for (int i = 0;i < 5;i++)
		{
			arr1[i] = rand() % 100;     //storing random vales in an array 
		}

		csvfile << "Random value  , ";
		for (int i = 0;i < 5;i++)
		{
			csvfile << ",";

			csvfile << arr1[i];
		}
		csvfile << endl;


		auto T1 = chrono::high_resolution_clock::now();
		selct_sorting(arr1);                             // sorting function calling 
		auto T2 = chrono::high_resolution_clock::now();
		auto duration = chrono::duration_cast<chrono::microseconds>(T2 - T1).count();
		csvfile << "sorted array  , selection ";
		for (int i = 0;i < 5;i++)
		{
			csvfile << ",";

			csvfile << arr1[i];
		}
		csvfile << ",";
		{

			csvfile << "exc_time , ";

			csvfile << duration << ", micro_s " << endl;

			

		

			avg += duration;

		}
		

	}
	csvfile << "avg time , ";
           // for finding avg time 
	csvfile << avg /10;
	csvfile << "\n ";
	avg = 0;

	for (int i = 0;i < 10;i++)
	{
		for (int i = 0;i < 5;i++)
		{
			arr1[i] = rand() % 100;     //storing random vales in an array 
		}

		csvfile << "Random value  , ";
		for (int i = 0;i < 5;i++)
		{
			csvfile << ",";

			csvfile << arr1[i];
		}
		csvfile << endl;


		auto T3 = chrono::high_resolution_clock::now();
		Bubble_sort(arr1);                               // Bubble function calling
		auto T4 = chrono::high_resolution_clock::now();
		auto durat = chrono::duration_cast<chrono::microseconds>(T4 - T3).count();
		csvfile << "sorted array  , Bubble ";
		for (int i = 0;i < 5;i++)
		{
			csvfile << ",";

			csvfile << arr1[i];
		}
		csvfile << ",";
		{

			csvfile << "exc_time , ";

			csvfile << durat << ", micro_s " << endl;
			csvfile << "\n ";
			avg += durat;
		}
	}
	csvfile << "avg time , ";
	// for finding avg time 
	csvfile << avg / 10;
	csvfile << "\n ";

	avg = 0;
	for (int i = 0;i < 10;i++)
	{
		for (int i = 0;i < 5;i++)
		{
			arr1[i] = rand() % 100;     //storing random vales in an array 
		}

		csvfile << "Random value  , ";
		for (int i = 0;i < 5;i++)
		{
			csvfile << ",";

			csvfile << arr1[i];
		}
		csvfile << endl;


		auto T5 = chrono::high_resolution_clock::now();
		insertion_sort(arr1);                         // insertion function calling
		auto T6 = chrono::high_resolution_clock::now();
		auto dura = chrono::duration_cast<chrono::microseconds>(T6 - T5).count();
		csvfile << "sorted array  , insertion ";
		for (int i = 0;i < 5;i++)
		{
			csvfile << ",";

			csvfile << arr1[i];
		}
		csvfile << ",";
		{

			csvfile << "exc_time , ";

			csvfile << dura << ", micro_s " << endl;
			csvfile << "\n ";
			avg += dura;

		}
	}
	csvfile << "avg time , ";
	// for finding avg time 
	csvfile << avg / 10;
	csvfile << "\n ";
}