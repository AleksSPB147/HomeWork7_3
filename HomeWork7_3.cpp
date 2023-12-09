
#include <iostream>
using namespace std;


int F(int n)
{
    if (n != 1 || n != 2)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 1;
        if (n > 2)
            return F(n - 2) * n;
    }
    return 1; 
}









int main()
{
    setlocale(LC_ALL, "RU");

    int n, m, result;
    cout << "Введите число " << "n :";
    cin >> n;
    cout << endl;
    cout<< "Значение F(n) = " << F(n);
    cout << endl;
}

//Напишите программу для вычисления значения функции F(n),
//где n — натуральное число, задана следующими соотношениями :
//F(1) = 1;
//F(2) = 1;
//F(n) = F(n – 2) * n при n > 2.