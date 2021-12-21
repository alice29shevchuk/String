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
    while (str[end])
    {
        if (isalpha(str[end]))
            kolword++;
        if(isdigit(str[end]))
            kolnumber++;
        end++;
    }
    cout <<"Количество букв в строке = "<< kolword;
    cout << "\n";
    cout << "Количество цифр в строке = "<<kolnumber;
}
