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

// ��ũ�� �Լ� - #define 
// ����: �Ϲ����� �Լ��� ���ؼ� ����ӵ��� ������ ����. 
// ���� : �����ϱ� ��ƴ�. ������ �Լ��� ��ũ���� ���·� �����ϴµ� �Ѱ谡 �ִ�.
// �ζ��� �Լ� vs ��ũ�� �Լ�
// ��ũ�� �Լ��� �ڷ����� ���������� ���� �Լ��� �������� �ս� �߻���������
// ���ø��̶�� ���� ����ϸ� ���������� ���� �Լ��� �� �� ������ �Ŀ� �������.
inline int SQUARE(int x) {
	return x * x;
}

// namespace - �Լ��� �̸� �浹�� �����ϱ� ����
/*
namespace BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
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

// �̸������� ��ø
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

// using�� �̿��� �̸������� ���
namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

// using�� �̿��Ͽ� ����� �����Ӱ� �ϱ�
using std::cin;
using std::cout;
using std::endl;
// �̸����� std�� ����� ���Ϳ� �����Ҷ� �����ϰڴ�
// using namespace std

// �̸����� ��Ī ����
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

// �������� �������� �� �ٸ� ���
int val = 100;	// ��������

int SimpleFunc(void)
{
	int val = 20;	// ��������
	val += 3;		// �������� val�� �� 3 ����
	::val += 7;		// �������� val�� �� 7 ����
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
	//std::cout << "[D, D, D] : " << BoxVulume() << std::endl; !����!
	
	//std::cout << SQUARE(5) << std::endl;
	//std::cout << SQUARE(12) << std::endl;
	
	//BestComImp1::SimpleFunc();
	//ProgComImp1::SimpleFunc();
	//std::cout << Parent::num << std::endl;
	//std::cout << Parent::SubOne::num << std::endl;
	//std::cout << Parent::SubTwo::num << std::endl;
	
	// std::cout, std::cin, std::endl�� <iostream>�� �̸����� std�ȿ� ���� �Ǿ��־� std::'...' ��� ����Ѵ�!
	
	// Ű���� using�� �̿��ؼ� '�̸����� Hybrid�� ���ǵ� HybFunc�� ȣ���� ������, �̸������� ���������ʰ� ȣ���ϰڴ�!'�� ���� ���
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
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();	// ���� �̸� ����
	ProgComImp1::SimpleFunc();	// �ٸ� �̸� ����
}

void BestComImp1::PrettyFunc(void)
{
	std::cout << "So pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}
