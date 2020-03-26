/*
    Name: Uran Sabyr
    StudentId: 20172008
    Assignment #2
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

class TimeSchedule
{
    private:
        int start_hour;
        int start_min;
        int end_hour;
        int end_min;

    public:
        TimeSchedule()
        {
            // Do nothing
        }

        TimeSchedule(int _start_hour, int _start_min, int _end_hour, int _end_min)
        {
            setSchedule(_start_hour, _start_min, _end_hour, _end_min);
        }

        /****************************************
         * You should implement below functions *
        *****************************************/

        // set schedule with given parameters
        void setSchedule(int _start_hour, int _start_min, int _end_hour, int _end_min)
        {
            start_hour = _start_hour;
            start_min = _start_min;
            end_hour = _end_hour;
            end_min = _end_min;
        }

        int getEndHour() const
        {
            return end_hour;
        }

        int getEndMin() const
        {
            return end_min;
        }

        // get start time in minutes
        int getStartTime() const
        {
            return start_hour * 60 + start_min;
        }

        // get end time in minutes
        int getEndTime() const
        {
            return end_hour * 60 + end_min;
        }

        // calculate period of a blank between former and latter schedule
        int operator-(const TimeSchedule& A) const
        {

        }
};

pair<int, int> gettime(string s){
    bool b = false;
    int h = 0, m = 0;
    h = int(s[0] - 48) * 10 + int(s[1] - 48);
    m = int(s[3] - 48) * 10 + int(s[4] - 48);

    return make_pair(h, m);
}


int main()
{
    // write your own code with TimeSchedule class
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int t, j = 1;
    while(cin >> t){

        TimeSchedule *time = new TimeSchedule[t + 1];
        for(int i = 0; i < t; i ++){
            string start, end, trash;
            cin >> start >> end;
            getline(cin, trash);
           // cout << start << " " << end << endl;
            pair<int, int> st = gettime(start);
            pair<int, int> et = gettime(end);
            time[i + 1].setSchedule(st.first, st.second, et.first, et.second);

        }
        time[0].setSchedule(10, 0, 10, 0);
        time[t + 1].setSchedule(18, 0, 18, 0);
        int mx = 0, imx;
        for(int i = 0; i <= t; i ++){
            if(time[i + 1].getStartTime() - time[i].getEndTime() > mx){
                mx = time[i + 1].getStartTime() - time[i].getEndTime();
                imx = time[i].getEndTime();
            }
        }
        cout << "Day #" << j << ": the longest nap start at ";
        int hour = imx / 60;
        if (hour < 10)
            cout << "0"<< hour;
        else
            cout << hour;
        int minute = imx % 60;
        if (minute < 10)
            cout << ":0" << minute;
        else
            cout << ":"<< minute;


        cout << " and will last for ";
        if (mx / 60 > 0)
            cout << mx / 60 << " hours ";
        cout << "and " << mx % 60 << " minutes\n";
        j ++;
        //cout << imx / 60 << " " << imx % 60 << " " << mx << endl;

}
    return 0;
}


