#include <iostream>
# include <stack>
# include <string>
using namespace std;
bool flag = false;
int main()
{
	string s;
	stack <int> stacky;
	stack <int> index;
	cin >> s;
	if (s.length() == 1)
	{
		cout << "1";
		return 0;
	}
	for (int i = 0; i<s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			stacky.push(s[i]);
			index.push(i);
		}

		else  if (s[i] == ')')
		{


			if (stacky.empty() == true)
			{
				cout << i + 1;
				return 0;
			}
			char b = stacky.top();
			index.pop();
			stacky.pop();
			if (b != '(')
			{
				cout << i + 1;
				flag = true;
				return 0;
			}
		}

		else  if (s[i] == ']')
		{
			if (stacky.empty() == true)
			{
				cout << i + 1;
				return 0;
			}
			char b = stacky.top();
			index.pop();
			stacky.pop();
			if (b != '[')
			{
				cout << i + 1;
				flag = true;
				return 0;
			}
		}

		else  if (s[i] == '}')
		{
			if (stacky.empty() == true)
			{
				cout << i + 1;
				return 0;
			}
			char b = stacky.top();
			index.pop();
			stacky.pop();
			if (b != '{')
			{
				cout << i + 1;
				flag = true;
				return 0;
			}
		}



	}
	if (stacky.empty() == true)
	{
		cout << "Success";
	}
	else
	{
		cout << index.top() + 1;

	}

	return 0;
}
