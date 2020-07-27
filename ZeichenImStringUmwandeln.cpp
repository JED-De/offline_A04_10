#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	string ausgabe;
	unsigned int anz = 0;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);

	for (int i = 0; i < eingabe.size(); i++)
	{
		if (eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z')
		{
			ausgabe = ausgabe + eingabe.at(i) + eingabe.at(i);
		}

		else if (eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')
		{
			ausgabe = ausgabe + eingabe.at(i) + eingabe.at(i) + eingabe.at(i);
		}

		else if (eingabe.at(i) >= '0' && eingabe.at(i) <= '9')
		{
			ausgabe = ausgabe + '.';
		}

		else if (eingabe.at(i) == '?' || eingabe.at(i) == '!')
		{
			ausgabe = ausgabe;
		}

		else if (eingabe.at(i) == ' ')
		{
			ausgabe = ausgabe + '_';
		}

		else
		{
			ausgabe = ausgabe + eingabe.at(i);
		}
	}
	cout << "Der Text nach der Umwandlung: " << ausgabe << endl;
	system("PAUSE");
	return 0;
}