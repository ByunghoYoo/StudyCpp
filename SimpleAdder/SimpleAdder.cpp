#include <iostream>

int betweenAdder(void) 
{
	// 여러개의 값을 연속 적으로 입력 받을 때에는
	// std::cin>>'변수1'>>'변수2';  
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자 입력: ";
	std::cin >> val1 >> val2;

	// C에서는 지역변수의 선언이 항상 제일 먼저 등장해야 했지만 
	// Cpp은 for문처럼 어디서든 삽입이 가능하다
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++) result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}

int stringIO(void) 
{
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다. \n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
	return 0;
}

int main(void)
{
	// 키보드로부터의 데이터 입력을 위한 형식
	// std::cin>>'변수';
	// 실수의 연산을 위해서는 변수의 Type을 Double로만 바꿔주면 된다.
	int val1;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과 :" << result << std::endl;

	betweenAdder();
	stringIO();

	return 0;
}
