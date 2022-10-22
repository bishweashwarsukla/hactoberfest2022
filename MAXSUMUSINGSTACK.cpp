#include <iostream>
#include <stack>

using namespace std;

int getsum(stack<int> a)
{
    int sum = 0;
    while (!a.empty())
    {
        int x = a.top();
        sum += x;
        a.pop();
    }

    return sum;
}

void display(stack<int> &a)
{
    if (a.empty())
    {
        cout << endl;
        return;
    }

    int x = a.top();
    cout << x << " ";
    a.pop();
    display(a);
    a.push(x);
}

void popping(stack<int> &smallest, stack<int> &l1, stack<int> &l2)
{

    while ((getsum(smallest) != getsum(l1)) || (getsum(l1) != getsum(l2)) || (getsum(smallest) != getsum(l2)))
    {

        if (getsum(smallest) >= getsum(l1) && getsum(smallest) >= getsum(l2))
        {
            smallest.pop();
        }
        else if (getsum(l1) >= getsum(smallest) && getsum(l1) >= getsum(l2))
        {
            l1.pop();
        }
        else if (getsum(l2) >= getsum(l1) && getsum(l2) >= getsum(smallest))
        {
            l2.pop();
        }
    }

    cout << "After popping :" << endl;
    display(smallest);
    display(l1);
    display(l2);
    if ((getsum(smallest) == getsum(l1)) && (getsum(l2) == getsum(l1)))
        cout << "\nMax Probable sum----" << getsum(smallest);
    else
        cout << "\n Max probable sum not possible in this case" << endl;
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    stack<int> smallest;
    stack<int> l1;
    stack<int> l2;

    cout << "enter the no of elements for stack 1 --";
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int a;
        cin >> a;
        s1.push(a);
    }

    cout << "enter the no of elements for stack 2 --";
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int a;
        cin >> a;
        s2.push(a);
    }

    cout << "enter the no of elements for stack 3 --";
    int n3;
    cin >> n3;
    for (int i = 0; i < n3; i++)
    {
        int a;
        cin >> a;
        s3.push(a);
    }

   
    popping(s1, s2, s3);

    return 0;
}