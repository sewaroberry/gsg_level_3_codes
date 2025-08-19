#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
#define endl '\n'

int Power(int a, int b) {
    int res = 1;

    for(int i = 0; i < b; i++) {
        res *= a;
    }

    return res;
}

signed main()
{
    int N;
    cin >> N;

    int P = 3 * Power(2, N - 1);

    vector <vector <string>> A = {{}};

    int cnt = 0, i = 0;
    while(true) {
        if(cnt == P) break;

        vector <string> cur = A[i];

        int M = cur.size();

        if(M == N) {
            for(int j = 0; j < M; j++) {
                cout << cur[j] << ' ';
            }
            cout << '\n';

            i++; cnt++;
            continue;
        }

        string Prev = (cur.empty() ? "Nothing" : cur.back());

        if(Prev != "Football") {
            cur.push_back("Football");
            A.push_back(cur);
            cur.pop_back();
        }

        if(Prev != "Swimming") {
            cur.push_back("Swimming");
            A.push_back(cur);
            cur.pop_back();
        }

        if(Prev != "Running") {
            cur.push_back("Running");
            A.push_back(cur);
            cur.pop_back();
        }

        i++;
    }

    cout << "Count: " << cnt << '\n';
    // cout << "Count: " << 3 * Power(2, N - 1) << '\n';

    return 0;
}
