class MyClass
{
public:
	MyClass(int x)
	{

	}
	MyClass(int x, int y) : MyClass(x)
	{
		// 매개변수가 있을 때에
		// 대리 생성자를 사용하는 방식!
	}
};