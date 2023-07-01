#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("NDCARD.inp","r",stdin);
    freopen("NDCARD.out","w",stdout);
    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    for (int i = 0; i < N; i++)
    {
        cin >> cards[i];
    }

    sort(cards.rbegin(), cards.rend());

    int maxSum = -1;

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            int sum = cards[i] + cards[j];
            for (int k = j + 1; k < N; k++)
            {
                if (sum + cards[k] <= M)
                {
                    maxSum = max(maxSum, sum + cards[k]);
                    break;
                }
            }
        }
    }

    cout << maxSum << endl;

    return 0;
}
