#include <iostream>

int betweenAdder(void) 
{
	// �������� ���� ���� ������ �Է� ���� ������
	// std::cin>>'����1'>>'����2';  
	int val1, val2;
	int result = 0;
	std::cout << "�� ���� ���� �Է�: ";
	std::cin >> val1 >> val2;

	// C������ ���������� ������ �׻� ���� ���� �����ؾ� ������ 
	// Cpp�� for��ó�� ��𼭵� ������ �����ϴ�
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++) result += i;
	}

	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}

int stringIO(void) 
{
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�. \n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
	return 0;
}

int main(void)
{
	// Ű����κ����� ������ �Է��� ���� ����
	// std::cin>>'����';
	// �Ǽ��� ������ ���ؼ��� ������ Type�� Double�θ� �ٲ��ָ� �ȴ�.
	int val1;
	std::cout << "ù ��° ���� �Է� : ";
	std::cin >> val1;

	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������� :" << result << std::endl;

	betweenAdder();
	stringIO();

	return 0;
}
