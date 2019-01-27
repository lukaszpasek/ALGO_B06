#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

struct party
{
    long long vote;
    int number;
    long long denominator;
};
bool operator< (party p, party q)
{
    if(p.vote*q.denominator != q.vote*p.denominator) return p.vote*q.denominator < q.vote*p.denominator;
    else if(p.vote != q.vote) return p.vote < q.vote;
    else return q.number < p.number;

}

int main()
{
    int ilosc;
    cin >> ilosc;

    for(int i=0; i<ilosc; i++)
    {
        priority_queue<party> k;
        int m;
        int p;
        cin >> p;
        cin >>m;
        party top;
        party partyx[p];
        int mandate[p];
        for(int i=0; i<p; i++)
        {
            cin >> partyx[i].vote;
            partyx[i].number = i;
            partyx[i].denominator = 1;
            k.push(partyx[i]);
            mandate[i] = 0;
        }
        while(m)
        {
            top = k.top();
            k.pop();
            mandate[top.number]++;
            top.denominator++;
            k.push(top);
            m--;

        }
        for(int i=0; i<p; i++)
        {
            cout << mandate[i] <<endl;
        }
    }
    return 0;
}
