#include <iostream>
#include <utility>
#include <map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        map<int, pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {

            if (m.find(a[i]) == m.end())
            {
                pair<int, int> p;
                p.first = i;
                p.second = b[i];
                m[a[i]] = p;
            }
            else
            {
                if(m[a[i]].second < b[i]){
                    m[a[i]].second = max(m[a[i]].second, b[i]);
                    m[a[i]].first = i;
                }
            }
        }

        auto i=m.rbegin();
        cout << i->second.first + 1<< endl;
    }
}
