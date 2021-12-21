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
	int kolhello = 0;
	while (str[end]) // пока не конец строки
	{
		if (isalpha(str[end]))
			kolword++;
		if (isdigit(str[end]))
			kolnumber++;
		if (ispunct(str[end]) || isspace(str[end]))
			kolrazdel++;
		end++;
	}
	cout << "Количество букв в строке = " << kolword;
	cout << "\n";
	cout << "Количество цифр в строке = " << kolnumber;
	cout << "\n";
	cout << "Количество разделителей = " << kolrazdel;
	cout << "\n";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ',')
		{
			str.replace(i, 1, ".");
		}
	}
	cout <<"Заменены запятые на точки: "<< str;
	cout << "\nРеверсивно выведена строка: ";
	for (int i = str.length(); i >=0; i--)
	{
		cout << str[i];
	}
	cout << "\n";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'H' && str[i + 1] == 'e' && str[i + 2] == 'l' && str[i + 3] == 'l' && str[i + 4] == 'o')
		{
			kolhello++;
			i += 4;
		}
	}
	cout <<"Количество слов 'Hello' = "<< kolhello;
}
