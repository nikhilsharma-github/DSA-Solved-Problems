#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void printStack(stack<int> s)
{
    stack<int> t = s;
    cout << "[ ";
    while (!t.empty())
    {
        cout << t.top() << " ";
        t.pop();
    }
    cout << "] -> ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    // Stack<Integer> st=new Stack<>();  // JAVA Declaration

    // printStack(s);
    // cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.push(10);
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.push(20);
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.push(30);
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.push(40);
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.pop();
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.pop();
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.pop();
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.pop();
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;
    s.pop();
    printStack(s);
    cout << "Top : " << s.top() << "   Size : " << s.size() << endl;

    return 0;
}