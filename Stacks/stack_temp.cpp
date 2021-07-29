#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Apple");
    s.push("Mango");
    s.push("Watermelon");

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
        /* code */
    }
    

}