﻿#include <windows.h>
#include <iostream>
//Судоходная компания предлагает два вида транспорта для перевозки сыпучих грузов. 
//Грузовик первого типа может перевезти Q1 тонн груза за одну поездку. 
//Разовая поездка стоит P1, и цена не зависит от уровня загрузки транспортного средства. 
//Для грузовика второго типа эти значения равны Q2 и P2 соответственно.
//Найдите минимальную стоимость перевозки A тонн груза.
//Вход 3 - т 20 - р 20 - т 100 - р 21
// Выход 120 
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int Q1=3, P1=20, Q2=20, P2=100,A=21,
    int sum=0,min=INT_MAX;
    //cin >> A >>  Q1 >> P1 >> Q2 >> P2;
    cout <<"Нужно "<< A <<" Т"<< endl;
    
    for (int i = 0; i < 3; i++)
    {        
        for (int j = 0; j < 3; j++)
        {
            if (Q1*i + Q2*j >= A)
            {
                sum = P1*i + P2*j;
                if (sum < min)
                {
                    min = sum;
                }
            }
        }
    }
    cout << "<" << min << ">" << endl;


}

