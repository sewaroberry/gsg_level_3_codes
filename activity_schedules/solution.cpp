#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double
#define endl '\n'

int cnt = 0;

void ScheduleActivities(int NumOfDays, int CurrentDay, vector<string>& Schedule) {
    vector <string> Activities = {"Football", "Swimming", "Running"};
    int M = Activities.size();

    if(CurrentDay == NumOfDays) {
        for(int i = 0; i < NumOfDays; i++) {
            cout << Schedule[i] << ' ';
        }
        cout << endl;

        cnt++;
        return;
    }

    for(int i = 0; i < M; i++) {
        if(CurrentDay > 0 && Schedule[CurrentDay - 1] == Activities[i]) continue;

        Schedule[CurrentDay] = Activities[i];
        ScheduleActivities(NumOfDays, CurrentDay + 1, Schedule);
    }
}

signed main()
{
    int Days;
    cin >> Days;

    vector <string> Schedule(Days);
    ScheduleActivities(Days, 0, Schedule);

    cout << "Count: " << cnt << endl;

    return 0;
}
