#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class kahfCampaignWinner{
    public:
    string name;
    int rank;

    kahfCampaignWinner( string name, int rank){
        this->name = name;
        this->rank = rank;
    }
};

class cmp{
    public:
    bool operator()(kahfCampaignWinner l, kahfCampaignWinner r){

        return (l.name == r.name)? l.rank < r.rank: l.name > r.name;
    }
};

int main()
{
    priority_queue<kahfCampaignWinner, vector<kahfCampaignWinner>, cmp> kahfBest;
    int n;
    cin >> n;
    while(n--){
        string name;
        int rank;
        cin >> name >> rank;
        kahfCampaignWinner kahf(name, rank);
        kahfBest.push(kahf);
    }


    while(!kahfBest.empty()){
        cout << kahfBest.top().name << " " << kahfBest.top().rank << endl;
        kahfBest.pop();
    }


    return 0;
}