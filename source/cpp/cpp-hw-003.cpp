// 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로글매을 작성해 보자.
// 예를 들어 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.

#include <iostream>
using namespace std;

int main() {

	int i, j, result;

	cout << "숫자를 입력해 주세요 : ";
	cin >> i;

	while (j<10) {

		result = i * j;
		cout << i << " * " << j << " = " << result << endl;
		j++;
	}
}


