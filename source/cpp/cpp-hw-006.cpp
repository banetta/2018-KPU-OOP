// 다음 세 함수를 이용해서 0이상 100미만의 난수를 총 5개 생성하는 예제를 만들되, C++의 헤더를 선언해서 작성해보자.
// 참고로 C언어의 경우 time 함수는 <time.h>에 선언되어 있고, rand 함수와 srand 함수는 <stdlib.h>에 선언되어 있다.

#include <iostream>
#include <cstdlib> // == stdlib.h
#include <ctime> // == time.h
using namespace std;

int main() {

	srand((unsigned int)time(NULL)); //srand 함수를 이용하여 난수의 시드값을 설정
					//랜덤으로 난수를 생성할 때 시드값이 고정되어 있으면 일정한 값이 나오기 때문에
					//time 함수를 이용하여 랜덤한 값의 시드를 설정하여 랜덤 난수가 나오게 설정
	for(int i = 0; i < 5; i++){
		cout << (rand() % 100) << endl; // 난수가 매우 넓은 폭으로 나오기 때문에 원하는 값을 출력하기 위해
						// modular 연산을 이용하여 범위를 지정한다.
						// ex) rand() % 100 이면 0 ~ 99까지 생성
						// 	rand() % 100 + 1 이면 1 ~ 100까지 생성
	}
}

