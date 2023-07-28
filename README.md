# 42KL-19-CPP07

This module is designed to help you understand Templates in CPP.

**Templates**

	- function overloading

**Example 1**

int max(int x, int y)
{
	return (x >= y ? x : y); //Ternary operator
}

template<typename T>
T max(T x, T y)
{
	return (x >= y ? x : y);
}

**Example 2**

	- Example (Before)								
	template<typename T>								
	void Swap(int& a, int& b)							
	{													
		int temp = a;										
		a = b;												
		b = temp;											
	}													
	void Swap(char& a, char& b)							
	{
		char temp = a;
		a = b;
		b = temp;
	}
	int main()											
	{													
		int a = 5, b = 7;																
		cout << a << " - " << b << endl;
		Swap<int>(a, b); //with or without <int>
		cout << a << " - " << b << endl;

		char c = 'c', d = 'd';
		cout << c << " - " << d << endl;
		Swap<char>(c, d);
		cout << c << " - " << d << endl;
	}

	(After)
	template<typename T> 
	void Swap(T &a, T &b)
	{
		T temp = a;
		a = b;
		b = temp;
	}
	
**Example 3 (class)**

	template<typename T = float> //can set default to a data type
	class Vertex
	{
		public:
			vertex(T const )
	}

**Ex02**

	copy constructor
	When you use the shallow copy in your copy constructor, by simply assigning the pointer src._dynamicArray to _dynamicArray, both arrays (in the source and the destination objects) will end up pointing to the same memory location. This means that when one object is destroyed (e.g., when it goes out of scope), it will deallocate the memory it is pointing to using delete[]. However, when the second object is also destroyed, it will again try to deallocate the same memory location (since it's pointing to the same memory address), which leads to a "pointer being freed was not allocated" error.
