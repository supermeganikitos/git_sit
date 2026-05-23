
#include <iostream>
using namespace std;


int fib(int n, int first, int last)
{
    int a;
    for(int i =3; i <= n; i ++)
    {
        cout << first << "\n";
        a = last;
        last += first;
        first = a;
    }
    cout << first << "\n";
    return last;
}

int main()
{
    cout << "Hello world";
    int n;
    setlocale(LC_ALL, "rus");
    cout << "фиббоначи итеративный \n";
    cout << "Введите число";
    cin >> n;
    cout << "\n";
    cout << n << "-ое число фиббоначи: " << fib(n, 0, 1);
} 
