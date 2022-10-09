// #include<iostream>
// #include<math.h>

// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int x ;
//         cin>>x;
//         int output1= (int)sqrt(x) + (int)cbrt(x);
//         int output2= (int)(sqrt(cbrt(x)));
//         cout<<output1-output2<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int fab(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fab(n - 1) + fab(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fab(n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char s[10];
//     cin >> s;
//     for (int i = 0; i < 6; i++)
//     {
//         char a = 'a';
//         s[i] = a;
//     }
//     cout << s << endl;
// }

#include <iostream>
using namespace std;

void remove(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {
        int i = 1;
        for (; input[i] != '\0'; i++)
        {
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
        remove(input);
    }
    else
    {
        remove(input + 1);
    }
}

int main()
{
    char s[1000];
    cin >> s;
    remove(s);
    cout << s << endl;
}