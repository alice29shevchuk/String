#include <iostream>
#include<string>
using namespace std;
int main()
{
    setlocale(0, "");
    string str;
    cout << "Введите строку: ";
    getline(cin, str);
    int end = 0;
    int kolnumber = 0;
    int kolword = 0;
    int kolrazdel = 0;
    while (str[end]) // пока не конец строки
    {
        if (isalpha(str[end]))
            kolword++;
        if(isdigit(str[end]))
            kolnumber++;
        if (ispunct(str[end]) || isspace(str[end]))
            kolrazdel++;
        end++;
    }
    cout <<"Количество букв в строке = "<< kolword;
    cout << "\n";
    cout << "Количество цифр в строке = "<<kolnumber;
    cout << "\n";
    cout << "Количество разделителей = " << kolrazdel;
}
