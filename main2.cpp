#include <iostream>

class Quest
{
private:
	int mID;
	int mExp;

public:
	Quest() : mID{ 1 }, mExp{ 1 }
	{
		// �⺻ ����Ʈ �ʱ�ȭ
	}

	Quest(std::string excel) : Quest()		// �븮 �����ڷ� Quest()���� ������
	{
		// �������� ������ ����
	}

	void Print()
	{
		std::cout << mID << " : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1("1.xlsx");		// ������ �����ڷ� �����ؼ�
							// mID�� 1, mExp�� 1�� �ʱ�ȭ�Ѵ�.
	q1.Print();

	int();
}
