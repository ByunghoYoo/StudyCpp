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

int main(void) {
	//MyFunc();
	//MyFunc('A');
	//MyFunc(12, 13);
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	std::cout << "[3, 3, 3] : " << BoxVulume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVulume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVulume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVulume() << std::endl;
	return 0;
}

int BoxVulume(int length, int width, int height)
{
	return length * width * height;
}