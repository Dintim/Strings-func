#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	/* //удвоение вхождения исмвола
	char str[100] = "abba";
	string s(str);
	char c = 'a';

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			s.insert(s.begin() + i, c);
			i++;
		}
	}
	cout << s << endl;*/

	
	
	//вставка строки в строку перед найденным символом
	/*string s="abba";
	string s1 = "qwer";
	char c = 'a';

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			s.insert(i, s1);
			i+=s1.size();
		}
	}
	cout << s << endl;*/
	

	//вставка строки в строку после найденного символа
	/*string s = "abba";
	string s1 = "qwer";
	char c = 'a';

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			s.insert(i+1, s1);
			i += s1.size();
		}
	}
	cout << s << endl;*/


	/*string s = "abba";
	string s1 = "ba";
	if (strstr(s.c_str(), s1.c_str()))
		cout << "true" << endl;*/

	//string s = "abbabababa";
	//string s1 = "ba";	
	//int sum = 0;	
	//string tmp = s;

	///*while (strstr(tmp.c_str(), s1.c_str())) {
	//	tmp = strstr(tmp.c_str(), s1.c_str()) + s1.size();
	//	sum++;
	//}*/

	///*while (s.find(s1) != string::npos) {
	//	s = s.substr(s.find(s1) + s1.size());
	//	sum++;
	//}*/

	///*char str1[100] = "abbabababa";
	//char str2[20] = "ba";
	//int z = 0;
	//for (int i = 0, j = 0; i < strlen(str1); i++) {
	//	if (str1[i] == str2[j]) {
	//		z++;
	//		j++;
	//	}
	//	else {
	//		z = 0, j = 0;
	//		if (str1[i] == str2[j]) {
	//			z++;
	//			j++;
	//		}
	//	}

	//	if (z == strlen(str2)) {
	//		sum++;
	//		z = 0;
	//		j = 0;
	//	}
	//}*/

	//cout << sum << endl;
	
	/*
	//Удалить из строки S первую подстроку, совпадающую с S0. Если совпадающих подстрок нет, то вывести строку S без изменений. 
	string s = "abbababa";
	string s1 = "ba";	
	if (s.find(s1) != string::npos) {
		s.erase(s.find(s1), s1.size());		
	}	
	cout << s << endl;*/

	////Удалить из строки S последнюю подстроку, совпадающую с S0. Если совпадающих подстрок нет, то вывести строку S без изменений. 
	//string s = "abbababa";
	//string s1 = "ba";
	//if (s.rfind(s1) != string::npos) {
	//	s.erase(s.rfind(s1), s1.size());
	//}
	//cout << s << endl;

	//Удалить из строки S все подстроки, совпадающие с S0. Если совпадающих подстрок нет, то вывести строку S без изменений. 
	/*string s = "abbababa";
	string s1 = "ba";
	while (s.find(s1) != string::npos) {
		s.erase(s.find(s1), s1.size());
	}
	cout << s << endl;*/
	

	//Даны строки S, S1 и S2. Заменить в строке S первое вхождение строки S1 на строку S2.
	/*string s = "abbababa";
	string s1 = "ba";
	string s2 = "xy";

	if (s.find(s1) != string::npos) {
		s.insert(s.find(s1), s2);
		s.erase(s.find(s1), s1.size());
	}
	cout << s << endl;*/

	
	//Даны строки S, S1 и S2. Заменить в строке S последнее вхождение строки S1 на строку S2. 
	/*string s = "abbababa";
	string s1 = "ba";
	string s2 = "xyz";

	if (s.rfind(s1) != string::npos) {
		s.insert(s.rfind(s1), s2);
		s.erase(s.rfind(s1), s1.size());
	}
	cout << s << endl;*/


	//Даны строки S, S1 и S2. Заменить в строке S все вхождения строки S1 на строку S2. 
	/*string s = "abbababa";
	string s1 = "ba";
	string s2 = "xyz";

	while (s.find(s1) != string::npos) {
		s.insert(s.find(s1), s2);
		s.erase(s.find(s1), s1.size());
	}
	cout << s << endl;*/


	//
	string s = "this isan example for";
	string f;
	if (s.find(" ") != string::npos) {
		f = s.substr(s.find(" ") + 1);	
	}
	
	string h;
	if (f.find(" ") != string::npos) {
		h = f.substr(f.find(" "));
	}
	
	string d = s.substr(s.find(" ") + f.size() - h.size());
	cout << d << endl;

	
	




	system("pause");
	return 0;
}