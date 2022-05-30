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

//Задание 3
void arr3(int* ptr, size_t size = 8)
{
    size_t count = 1;
    for(size_t i = 0; i < size; i++)
    {
        ptr[i] = count;
        count += 3;
    }
}

// Задание 4
void arr4(int* ptr,size_t len, int n)
{
    int myarr[] = { 0 };
    for (size_t i = 0; i < len; i++)
    {
        myarr[i] = ptr[i];
    }

    if (n < 0) {
        n = len - abs(n);
    }


    int count = 0;
    for (size_t i = n; i < len; i++)
    {
        ptr[count] = myarr[i];
        count++;
    }

    for (size_t i = 0; i < n; i++)
    {
        ptr[count] = myarr[i];
        count++;
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

    cout << endl;
    int a3[8] = { 0 };
    arr3(a3);
    for (int i : a3) {
        cout << i << ' ';
    }

    cout << endl;
    int a4[4] = { 5, 2, 3, 4 };
    arr4(a4, 4, 3);
    for (size_t i : a4) {
        cout << i << ' ';
    }
}

