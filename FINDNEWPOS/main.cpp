#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person
{
    long long index;
    long long height;
};

bool cmp(const Person& a, const Person& b)
{
    if (a.height == b.height)
        return a.index < b.index;
    return a.height < b.height;
}

int main()
{
    long long n, t;
    cin >> n >> t;

    vector<Person> people(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> people[i].height;
        people[i].index = i + 1;
    }

    sort(people.begin(), people.end(), cmp);

    long long position = t;
    for (long long i = 0; i < n; i++)
    {
        if (people[i].index == t)
        {
            position = i + 1;
            break;
        }
    }

    cout << position << endl;

    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4670
}
