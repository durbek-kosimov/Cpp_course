#include <iostream>
using namespace std;
int main()
{
	int vowels = 0, consonants = 0, spaces = 1;
	int status = 0;
	string s = "how        Ma ny      Wo%r    ds7";
	for(int i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
			s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			vowels ++;
		else if(s[i] == ' ')
		{
			if(i - status == 1)
			{
				status = i;
				continue;	
			}
			spaces ++;
			status = i;
		}
		else if(!((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90)))
			continue;
		else
			consonants ++; 
	}
	cout << "Vowels " << vowels << endl;
	cout << "Consonants " << consonants << endl;
	cout << "Words " << spaces << endl;
	return 0;
}
