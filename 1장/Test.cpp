#include <iostream>

// FunctionOverloading
// 함수 오버로딩은 기존 자바에서 진행했던 내용이라 크게 어렵지 않다.
void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

// DefaultValue
// 자바에서는 해보진 않았음..
// main함수에서 Adder함수를 호출 할 때 매개변수를 주지 않는다면
// Adder함수에 선언한 1과 2가 전달 된것으로 간주됨.
// 하나만 전달한다면 num1의 값만이 매개변수의 값으로 대체됨
// 두개의 매개변수중 뒤에 있는 매개변수의 값만 대체할수는 없는 것 같음 Adder( , 5) X
int Adder(int num1 = 1, int num2 = 2) 
{
	return num1 + num2;
}
// 함수의 원형을 별도로 선언하는 경우에는 매개변수의 디폴트 값은 함수의 원형 선언에만 위치 시켜야 함
// ex) int Adder(int num1=1, int num2=2);
//     int main(){ Adder() }
//     int Adder(int num1, int num2){ return num1+num2 }

// 부분적 디폴트 값 설정
// 반드시 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 한다. 
// 함수에 전달되는 인자가 왼쪽에서부터 오른쪽으로 채워지기 때문에
// ex) int YourFunc(int num1, int num2=20, int num3=30) { ... } ( O )
// ex) int WrongFunc(int num1=10, int num2=20, int num3) { ... } ( X )
int BoxVulume(int length, int width = 1, int height = 1);

// 매크로 함수 - #define 
// 장점: 일반적인 함수에 비해서 실행속도의 이점이 있음. 
// 단점 : 정의하기 어렵다. 복잡한 함수를 매크로의 형태로 정의하는데 한계가 있다.
// 인라인 함수 vs 매크로 함수
// 매크로 함수는 자료형에 의존적이지 않은 함수로 데이터의 손실 발생하지않음
// 템플릿이라는 것을 사용하면 의존적이지 않은 함수로 쓸 수 있으나 후에 배워보자.
inline int SQUARE(int x) {
	return x * x;
}

// namespace - 함수의 이름 충돌을 방지하기 위함
/*
namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}
*/
namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace BestComImp1
{
	void PrettyFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}

// 이름공간의 중첩
namespace Parent
{
	int num = 2;

	namespace SubOne
	{
		int num = 3;
	}

	namespace SubTwo
	{
		int num = 4;
	}
}

// using을 이용한 이름공간의 명시
namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

// using을 이용하여 입출력 자유롭게 하기
using std::cin;
using std::cout;
using std::endl;
// 이름공간 std에 선언된 모든것에 접근할때 생략하겠다
// using namespace std

// 이름공간 별칭 지정
namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

// 범위지정 연산자의 또 다른 기능
int val = 100;	// 전역변수

int SimpleFunc(void)
{
	int val = 20;	// 지역변수
	val += 3;		// 지역변수 val의 값 3 증가
	::val += 7;		// 전역변수 val의 값 7 증가
}

int main(void) {
	//MyFunc();
	//MyFunc('A');
	//MyFunc(12, 13);
	
	//std::cout << Adder() << std::endl;
	//std::cout << Adder(5) << std::endl;
	//std::cout << Adder(3, 5) << std::endl;

	//std::cout << "[3, 3, 3] : " << BoxVulume(3, 3, 3) << std::endl;
	//std::cout << "[5, 5, D] : " << BoxVulume(5, 5) << std::endl;
	//std::cout << "[7, D, D] : " << BoxVulume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVulume() << std::endl; !에러!
	
	//std::cout << SQUARE(5) << std::endl;
	//std::cout << SQUARE(12) << std::endl;
	
	//BestComImp1::SimpleFunc();
	//ProgComImp1::SimpleFunc();
	//std::cout << Parent::num << std::endl;
	//std::cout << Parent::SubOne::num << std::endl;
	//std::cout << Parent::SubTwo::num << std::endl;
	
	// std::cout, std::cin, std::endl은 <iostream>의 이름공간 std안에 선언 되어있어 std::'...' 라고 사용한다!
	
	// 키워드 using을 이용해서 '이름공간 Hybrid에 정의된 HybFunc를 호출할 때에는, 이름공간을 지정하지않고 호출하겠다!'는 것을 명시
	using Hybrid::HybFunc;
	HybFunc();
	
	cout << "Hello World!" << endl;
	
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;
	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	return 0;
}

int BoxVulume(int length, int width, int height)
{
	return length * width * height;
}

void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();	// 동일 이름 공간
	ProgComImp1::SimpleFunc();	// 다른 이름 공간
}

void BestComImp1::PrettyFunc(void)
{
	std::cout << "So pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
