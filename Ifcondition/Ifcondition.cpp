// Ifcondition.cpp : 

#include <iostream>

int main(){
    using namespace std;
    //{
    //    cout << "enter first num: ";
    //    int a{};
    //    cin >> a;
    //    cout << "enter second num: ";
    //    int b{};
    //    cin >> b;
    //    cout << a + b << '\n';
    //    cout << a * b << '\n';
    //    std::cout << "Последовательность чисел:" << a << b << '\n';
    //    // == != > >= < <=
    //    //if condition then action else action;
    //    if (b != 0) {
    //        cout << a / b << '\n';
    //        cout << a % b << '\n';
    //    }
    //    else {
    //        cout << "divizion by zero - unsuported\n";
    //    }
    //}
    int a{ 28 };//bool char int float...
    if (!(a%2)  && a==0) {
       cout << a << " is odd";
    }
    else {
       cout << a << " is even";
    }
    bool leap{
        bool(1992%4) + bool(1992%100)
    };
    return 0;
}
// логическое умножение,    логическое и    &&
// логическое сложение,     лигическое или  ||
// логическое отрицание,    логическое не   !
//  a b  && ||     a !
//  0 0  0  0      0 1
//  0 1  0  1      1 0
//  1 0  0  1
//  1 1  1  1


/*
задание 1
определить является ли введённое пользователем число отрицательным

задание 2
спросить у пользователя 2 числа вывести их в порядке возрастания

задание 3
спросить у пользователя 2 числа А и B в конце работы приложения 
в числе А всегда должно хранится большее из введённых чисел

задание 4 
спросить у пользователя 2 числа
проверить положительны ли они и являются ли они кратными друг другу
(одно из чисел пожно поделить на другое без остатка)
вывести кратные ли числа но только в том случае если оба числа положительные

*/