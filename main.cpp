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

	Quest(std::string excel) : mID{ 2 }, mExp{ 2 }
	{
		// �⺻ ����Ʈ �ʱ�ȭ   
		// + �������� ������ ����

		// �⺻����Ʈ �ʱ�ȭ�� ��ġ�µ� Quest();�� ���⼭ �����غ���?
		// �����ڴ� �Լ�ó�� ���������� ȣ���� �� �ִ°��� �ƴϴ�
		// �����ڴ� ��ü�� ������� �� �ڵ������� �ҷ����� Ư���� �Լ���.
		// Quest(); �� �޸𸮿� �⺻�����ڸ� ����ؼ�
		// �̸��� ���� r-value ���� �����. ���� �ٿ��� �ٷ� �������.
		// �ᱹ �ƹ��� �ǹ̰� ���� �ڵ尡 �Ǿ������.
	}

	void Print()
	{
		std::cout << mID << " : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1("1.xlsx");				// 2, 2 ���

	q1.Print();

	int();
}
