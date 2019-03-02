// 다음 표준함수를 호출하는 예제를 만들되, C++의 헤더를 선언해서 만들어보자.
// 그리고, 예제의 내용은 상관이 없지만, 아래의 함수들을 최소 1회 이상 호출해야 한다.
// 참고로 다음 함수들은 <string>에 선언되어 있다.

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str1[20], str2[20];
	int result, i;

	cout << "문자를 입력해 주세요 : ";
	cin >> str1;
	
	i = strlen(str1);
	cout << "길이 : " << i << endl;

	cout << "문자열을 복사합니다." << endl;
	strcpy(str1, str2);

	result = strcmp(str1, str2);
	cout << "비교 결과 : " << result << endl;

	cout << "문자열 뒤에 추가합니다.";
	strcat(str2, str1);

	result = strcmp(str1, str2);
	cout << "비교 결과 : " << result << endl;
}

