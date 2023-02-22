#include <iostream>

class Quest
{
private:
	int mID;
	int mExp;

public:
	Quest() : mID{ 1 }, mExp{ 1 }
	{
		// 기본 퀘스트 초기화
	}

	Quest(std::string excel) : Quest()		// 대리 생성자로 Quest()에게 위임함
	{
		// 엑셀에서 데이터 읽음
	}

	void Print()
	{
		std::cout << mID << " : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1("1.xlsx");		// 위임한 생성자로 점프해서
							// mID를 1, mExp를 1로 초기화한다.
	q1.Print();

	int();
}
