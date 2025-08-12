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
            cout << endl;

            i++; cnt++;
            continue;
        }

        string Prev = (cur.empty() ? "Nothing" : cur.back());

        vector <string> temp = cur;

        if(Prev != "Football") {
            temp.push_back("Football");
            A.push_back(temp);
        }

        temp = cur;

        if(Prev != "Swimming") {
            temp.push_back("Swimming");
            A.push_back(temp);
        }

        temp = cur;

        if(Prev != "Running") {
            temp.push_back("Running");
            A.push_back(temp);
        }

        i++;
    }

    cout << "Count: " << cnt << endl;

    return 0;
}
