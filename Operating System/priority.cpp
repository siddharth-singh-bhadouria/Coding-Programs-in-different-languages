#include <bits/stdc++.h>
using namespace std;

struct process
{
    int id;
    int at;
    int bt;
    int pt;
    int ct;
    int tat;
    int wt;
};

typedef pair<int, int> pi;

int main()
{
    int n;
    cin >> n;

    process p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].at >> p[i].bt >> p[i].pt;
        p[i].id = i;
    }

    int ct[n];

    priority_queue<pi, vector<pi>, greater<pi> > pq;

    int j = 0, t = p[0].at, k = 0;

    pq.push(make_pair(p[j].pt, p[j].id));

    int index = pq.top().second;

    p[index].ct = t + p[index].bt;

    t = p[index].ct;
    pq.pop();

    j++;

    while (j < n)
    {
        while (t >= p[j].at && j < n)
        {
            pq.push(make_pair(p[j].pt, p[j].id));
            // cout<<j<<" "<<p[j].id<<" ";
            j++;
        }
        if (pq.empty())
        {
            t++;
            continue;
        }
        index = pq.top().second;

        p[index].ct = t + p[index].bt;

        t = p[index].ct;
        pq.pop();
    }

    while (!pq.empty())
    {
        index = pq.top().second;

        p[index].ct = t + p[index].bt;

        t = p[index].ct;
        pq.pop();
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<ct[i]<<" ";
    // }

    cout << "\nProcesses  "
         << " Burst time  "
         << " Arr Time "
         << " Priority "
         << "Comp. Time\n";
    //  << " Waiting time  " << " Turn around time\n";

    for (int i = 0; i < n; i++)
    {
        cout << "   " << p[i].id << "\t\t"
             << p[i].bt << "\t    " << p[i].at << "\t\t" << p[i].pt
             << "\t" << p[i].ct << endl;
    }

    // cout<<endl<<"Avg tat time is :"<<total_tat/n<<endl;
    // cout<<"Avg wt time is :"<<total_wt/n<<endl;
}