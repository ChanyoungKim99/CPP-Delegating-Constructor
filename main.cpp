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

	Quest(std::string excel) : mID{ 2 }, mExp{ 2 }
	{
		// 기본 퀘스트 초기화   
		// + 엑셀에서 데이터 읽음

		// 기본퀘스트 초기화가 겹치는데 Quest();를 여기서 선언해볼까?
		// 생성자는 함수처럼 직접적으로 호출할 수 있는것이 아니다
		// 생성자는 객체가 만들어질 때 자동적으로 불려지는 특수한 함수다.
		// Quest(); 는 메모리에 기본생성자를 사용해서
		// 이름이 없는 r-value 값이 생긴다. 다음 줄에서 바로 사라진다.
		// 결국 아무런 의미가 없는 코드가 되어버린다.
	}

	void Print()
	{
		std::cout << mID << " : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1("1.xlsx");				// 2, 2 출력

	q1.Print();

	int();
}
