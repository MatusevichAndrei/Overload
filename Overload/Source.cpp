#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(float arr[], const int n);
double AVG(double arr[], const int n);

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(float arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
float minValueIn(float arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
float maxValueIn(float arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, const int k);
void shiftLeft(float arr[], const int n, const int k);
void shiftLeft(double arr[], const int n, const int k);
void shiftLeft(char arr[], const int n, const int k);

void shiftRight(int arr[], const int n, const int k);
void shiftRight(float arr[], const int n, const int k);
void shiftRight(double arr[], const int n, const int k);
void shiftRight(char arr[], const int n, const int k);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int k);
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, const int k);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int k);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, const int k);

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, const int k);
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, const int k);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, const int k);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, const int k);

int main()
{
	setlocale(LC_ALL, "");
	const int n = 8;
	int i_arr[n];
	FillRand(i_arr, n);
	cout << "Исходный одномерный массив int: ";
	Print(i_arr, n);
	Sort(i_arr, n);
	cout << "Отсортированный массив: ";
	Print(i_arr, n);
	cout << "Сумма элементов массива: " << Sum(i_arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(i_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr, n) << endl;
	shiftLeft(i_arr, n, 3);
	cout << "Массив после сдвига влево на 3: ";
	Print(i_arr, n);
	shiftRight(i_arr, n, 4);
	cout << "Массив после сдвига вправо на 4: ";
	Print(i_arr, n);

	float f_arr[n];
	FillRand(f_arr, n);
	cout << "\nИсходный одномерный массив float: ";
	Print(f_arr, n);
	Sort(f_arr, n);
	cout << "Отсортированный массив: ";
	Print(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(f_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, n) << endl;
	shiftLeft(f_arr, n, 3);
	cout << "Массив после сдвига влево на 3: ";
	Print(f_arr, n);
	shiftRight(f_arr, n, 4);
	cout << "Массив после сдвига вправо на 4: ";
	Print(f_arr, n);

	double d_arr[n];
	FillRand(d_arr, n);
	cout << "\nИсходный одномерный массив double: ";
	Print(d_arr, n);
	Sort(d_arr, n);
	cout << "Отсортированный массив: ";
	Print(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(d_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, n) << endl;
	shiftLeft(d_arr, n, 3);
	cout << "Массив после сдвига влево на 3: ";
	Print(d_arr, n);
	shiftRight(d_arr, n, 4);
	cout << "Массив после сдвига вправо на 4: ";
	Print(d_arr, n);

	char c_arr[n];
	FillRand(c_arr, n);
	cout << "\nИсходный одномерный массив char: ";
	Print(c_arr, n);
	Sort(c_arr, n);
	cout << "Отсортированный массив: ";
	Print(c_arr, n);
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, n) << endl;
	shiftLeft(c_arr, n, 3);
	cout << "Массив после сдвига влево на 3: ";
	Print(c_arr, n);
	shiftRight(c_arr, n, 4);
	cout << "Массив после сдвига вправо на 4: ";
	Print(c_arr, n);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	cout << "\nИсходный двумерный массив int: " << endl;
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	cout << "Отсортированный двумерный массив: " << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, 3);
	cout << "Массив после сдвига влево на 3: " << endl;
	Print(i_arr_2, ROWS, COLS);
	shiftRight(i_arr_2, ROWS, COLS, 4);
	cout << "Массив после сдвига вправо на 4: " << endl;
	Print(i_arr_2, ROWS, COLS);

	float f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS);
	cout << "\nИсходный двумерный массив float: " << endl;
	Print(f_arr_2, ROWS, COLS);
	Sort(f_arr_2, ROWS, COLS);
	cout << "Отсортированный двумерный массив: " << endl;
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr_2, ROWS, COLS) << endl;
	shiftLeft(f_arr_2, ROWS, COLS, 3);
	cout << "Массив после сдвига влево на 3: " << endl;
	Print(f_arr_2, ROWS, COLS);
	shiftRight(f_arr_2, ROWS, COLS, 4);
	cout << "Массив после сдвига вправо на 4: " << endl;
	Print(f_arr_2, ROWS, COLS);

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	cout << "\nИсходный двумерный массив double: " << endl;
	Print(d_arr_2, ROWS, COLS);
	Sort(d_arr_2, ROWS, COLS);
	cout << "Отсортированный двумерный массив: " << endl;
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	shiftLeft(d_arr_2, ROWS, COLS, 3);
	cout << "Массив после сдвига влево на 3: " << endl;
	Print(d_arr_2, ROWS, COLS);
	shiftRight(d_arr_2, ROWS, COLS, 4);
	cout << "Массив после сдвига вправо на 4: " << endl;
	Print(d_arr_2, ROWS, COLS);

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	cout << "\nИсходный двумерный массив char: " << endl;
	Print(c_arr_2, ROWS, COLS);
	Sort(c_arr_2, ROWS, COLS);
	cout << "Отсортированный двумерный массив: " << endl;
	Print(c_arr_2, ROWS, COLS);
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	shiftLeft(c_arr_2, ROWS, COLS, 3);
	cout << "Массив после сдвига влево на 3: " << endl;
	Print(c_arr_2, ROWS, COLS);
	shiftRight(c_arr_2, ROWS, COLS, 4);
	cout << "Массив после сдвига вправо на 4: " << endl;
	Print(c_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}

void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = (float)((rand() % 10000) / 10.0);
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	arr[i] = (double)((rand() % 10000) / 100.0);
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = 'a' + rand() % 26;
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr[i][j] = rand() % 100;
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr[i][j] = (float)((rand() % 10000) / 10.0);
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr[i][j] = (double)((rand() % 10000) / 100.0);
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			arr[i][j] = 'a' + rand() % 26;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n - 1; i++)	
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n - 1; i++)	
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n - 1; i++)	
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n - 1; i++)	
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS - 1; i++)
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = j / COLS;
			int j2 = j - (j / COLS) * COLS;
			if (arr[i2][j2] < arr[i1][j1])
			{
				int buffer = arr[i1][j1];
				arr[i1][j1] = arr[i2][j2];
				arr[i2][j2] = buffer;
			}
		}
}

void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS - 1; i++)
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = j / COLS;
			int j2 = j - (j / COLS) * COLS;
			if (arr[i2][j2] < arr[i1][j1])
			{
				float buffer = arr[i1][j1];
				arr[i1][j1] = arr[i2][j2];
				arr[i2][j2] = buffer;
			}
		}
}

void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS - 1; i++)
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = j / COLS;
			int j2 = j - (j / COLS) * COLS;
			if (arr[i2][j2] < arr[i1][j1])
			{
				double buffer = arr[i1][j1];
				arr[i1][j1] = arr[i2][j2];
				arr[i2][j2] = buffer;
			}
		}
}

void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS - 1; i++)
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = j / COLS;
			int j2 = j - (j / COLS) * COLS;
			if (arr[i2][j2] < arr[i1][j1])
			{
				char buffer = arr[i1][j1];
				arr[i1][j1] = arr[i2][j2];
				arr[i2][j2] = buffer;
			}
		}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
	return sum;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
	return sum;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			sum += arr[i][j];
	return sum;
}

double AVG(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double AVG(float arr[], const int n)
{
	return Sum(arr, n) / n;
}

double AVG(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double AVG(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < min)
				min = arr[i][j];
	return min;
}

float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < min)
				min = arr[i][j];
	return min;
}

double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < min)
				min = arr[i][j];
	return min;
}

char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] < min)
				min = arr[i][j];
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > max)
				max = arr[i][j];
	return max;
}

float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > max)
				max = arr[i][j];
	return max;
}

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > max)
				max = arr[i][j];
	return max;
}

char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			if (arr[i][j] > max)
				max = arr[i][j];
	return max;
}

void shiftLeft(int arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		int buffer = arr[0];
		for (int j = 1; j < n; j++)
			arr[j - 1] = arr[j];
		arr[n - 1] = buffer;
	}
}

void shiftLeft(float arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		float buffer = arr[0];
		for (int j = 1; j < n; j++)
			arr[j - 1] = arr[j];
		arr[n - 1] = buffer;
	}
}

void shiftLeft(double arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		double buffer = arr[0];
		for (int j = 1; j < n; j++)
			arr[j - 1] = arr[j];
		arr[n - 1] = buffer;
	}
}

void shiftLeft(char arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		char buffer = arr[0];
		for (int j = 1; j < n; j++)
			arr[j - 1] = arr[j];
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
			arr[j] = arr[j - 1];
		arr[0] = buffer;
	}
}

void shiftRight(float arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		float buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
			arr[j] = arr[j - 1];
		arr[0] = buffer;
	}
}

void shiftRight(double arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
			arr[j] = arr[j - 1];
		arr[0] = buffer;
	}
}

void shiftRight(char arr[], const int n, const int k)
{
	for (int i = 0; i < k; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
			arr[j] = arr[j - 1];
		arr[0] = buffer;
	}
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		int buffer = arr[0][0];
		for (int i = 1; i < ROWS * COLS; i++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i2][j2] = arr[i1][j1];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		float buffer = arr[0][0];
		for (int i = 1; i < ROWS * COLS; i++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i2][j2] = arr[i1][j1];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		double buffer = arr[0][0];
		for (int i = 1; i < ROWS * COLS; i++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i2][j2] = arr[i1][j1];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		char buffer = arr[0][0];
		for (int i = 1; i < ROWS * COLS; i++)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i2][j2] = arr[i1][j1];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS * COLS - 1; i > 0; i--)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i1][j1] = arr[i2][j2];
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		float buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS * COLS - 1; i > 0; i--)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i1][j1] = arr[i2][j2];
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS * COLS - 1; i > 0; i--)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i1][j1] = arr[i2][j2];
		}
		arr[0][0] = buffer;
	}
}

void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, const int k)
{
	for (int a = 0; a < k; a++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS * COLS - 1; i > 0; i--)
		{
			int i1 = i / COLS;
			int j1 = i - (i / COLS) * COLS;
			int i2 = (i - 1) / COLS;
			int j2 = (i - 1) - ((i - 1) / COLS) * COLS;
			arr[i1][j1] = arr[i2][j2];
		}
		arr[0][0] = buffer;
	}
}