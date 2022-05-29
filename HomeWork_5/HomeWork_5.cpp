#include <iostream>
using namespace std;

//Задание 1
void arr(double ptr[], int size)
{
    for(size_t i = 0; i < size; i++)
    {
        cout << ptr[i] << ' ';
    }
}

//Задание 2
void arr2(int ptr[], size_t size)
{
    for (size_t i = 0; i < size; i++) 
    {
        cout << ptr[i] << ' ';
    }
    cout << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << abs(ptr[i] - 1)<< ' ';
    }
}

int main()
{
    const int s = 5;
    double a[s] = { 3.2, 5.3, 8.7, 9.5 };
    arr(a, s);
    cout << endl;
    const int s2 = 10;
    int a2[s2] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    arr2(a2, 10);
}

