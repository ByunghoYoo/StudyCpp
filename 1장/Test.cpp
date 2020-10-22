#include <iostream>

// FunctionOverloading
// �Լ� �����ε��� ���� �ڹٿ��� �����ߴ� �����̶� ũ�� ����� �ʴ�.
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
// �ڹٿ����� �غ��� �ʾ���..
// main�Լ����� Adder�Լ��� ȣ�� �� �� �Ű������� ���� �ʴ´ٸ�
// Adder�Լ��� ������ 1�� 2�� ���� �Ȱ����� ���ֵ�.
// �ϳ��� �����Ѵٸ� num1�� ������ �Ű������� ������ ��ü��
// �ΰ��� �Ű������� �ڿ� �ִ� �Ű������� ���� ��ü�Ҽ��� ���� �� ���� Adder( , 5) X
int Adder(int num1 = 1, int num2 = 2) 
{
	return num1 + num2;
}
// �Լ��� ������ ������ �����ϴ� ��쿡�� �Ű������� ����Ʈ ���� �Լ��� ���� ���𿡸� ��ġ ���Ѿ� ��
// ex) int Adder(int num1=1, int num2=2);
//     int main(){ Adder() }
//     int Adder(int num1, int num2){ return num1+num2 }

// �κ��� ����Ʈ �� ����
// �ݵ�� ������ �Ű������� ����Ʈ ������ ä��� ���·� �����ؾ� �Ѵ�. 
// �Լ��� ���޵Ǵ� ���ڰ� ���ʿ������� ���������� ä������ ������
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