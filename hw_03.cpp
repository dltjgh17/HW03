#include <iostream>

using namespace std;

template <typename T>
class SimpleVector 
{
private:
	T* data;
	int cap;
	int len;

public:

	SimpleVector() 
	{
		cap = 10;
		len = 0;
		data = new T[cap];
	}
	SimpleVector(int size)
	{
		cap = size;
		len = 0;
		data = new T[cap];
	}
	~SimpleVector()
	{
		delete[] data;
	}
	void push_back(const T& value)
	{
		if (len < cap)
		{
			data[len++] = value;
		}
	}
	void pop_back()
	{
		if (len > 0)
		{
			len--;
		}
	}
	int size() const
	{
		return len;
	}
	int capacity() const
	{
		return cap;
	}
	void print() const
	{
		for (int i = 0; i < len; i++)
		{
			cout << data[i] << "";
		}
		cout << endl;
	}
};
int main() {
	SimpleVector<int> vec(5);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.print();                // 출력: 1 2 3
	cout << vec.size() << endl;     // 출력: 3
	cout << vec.capacity() << endl; // 출력: 5
}
