#include <iostream>
#include <string>
#include <vector>


std::string Find(const std::vector<std::string>& myVector) {
	
	/*
	* В данном решении мы сравниваем только две строки
	* Нужно написать для трех строк
	*/

	/*bool flag = true;
	int count = 0;
	std::string tmp = "";
	std::string result = "";

	for (const auto& i : myVector) {
		if (!flag) {
			while (i[count] == tmp[count]) {
				result += i[count];
                ++count;
			}
		}
		flag = false;
		tmp = i;
	}

	return result;*/

	// Решение - костыль
	std::string s1 = myVector[0];
	std::string s2 = myVector[1];
	std::string s3 = myVector[2];
	std::string result = "";

	for (int i = 0; i < s1.size() - 1; ++i)
	{
		if (s1[i] != s2[i] ||
			s1[i] != s3[i] ||
			s2[i] != s3[i])
				break;
		
		result = result + s1[i];
	}

	return result;
}

int main() {
	std::vector<std::string> myVector = { "term", "terp", "ter" };
	
	std::string str = Find( myVector );
	
	std::cout << str << std::endl;

	return 0;
}