# 42KL-19-CPP07

This module is designed to help you understand Templates in CPP.

**Templates**

	- function overloading

**Example 1**

int max(int x, int y)
{
	return (x >= y ? x : y); //Ternary operator
}
template<typname T>
T max(T x, T y)
{
	return (x >= y ? x : y);
}

**Example 2**

	- Example (Before)									- Example (After)
		template<typename T>								template<typename T> //<class> works too
		void Swap(int& a, int& b)							void Swap(T& a, T&b) // becomes a generic function
		{													{
			int temp = a;										T temp = a;
			a = b;												a = b;
			b = temp;											b = temp;
		}													}
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
	
**Example 3 (class)**

	template<typename T = float> //can set default to a data type
	class Vertex
	{
		public:
			vertex(T const )
	}

