#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int s_hours, s_minutes, t_hours, t_minutes;
    stringstream(s.substr(0, 2)) >> s_hours;
    stringstream(s.substr(3)) >> s_minutes;
    stringstream(t.substr(0, 2)) >> t_hours;
    stringstream(t.substr(3)) >> t_minutes;

    int hours = s_hours - t_hours, minutes = s_minutes - t_minutes;
    (minutes < 0) ? minutes += 60, hours -= 1 : 0;
    hours = (hours + 24) % 24;

    stringstream time_formatted;
    time_formatted << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes;
    cout << time_formatted.str();
}
