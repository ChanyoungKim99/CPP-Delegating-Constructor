class MyClass
{
public:
	MyClass(int x)
	{

	}
	MyClass(int x, int y) : MyClass(x)
	{
		// �Ű������� ���� ����
		// �븮 �����ڸ� ����ϴ� ���!
	}
};