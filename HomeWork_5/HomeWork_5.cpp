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

int main()
{
    const int s = 5;
    double a[s] = { 3.2, 5.3, 8.7, 9.5 };
    arr(a, s);
}

