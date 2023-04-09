#include <iostream>
#include <set>
#include <utility>
#include <string> 
#include <vector>
using namespace std;

bool compareStr(const string& x, const string& y) {
    //TODO
    if (x <= y) return true;
    else if (x > y) return false;
}

typedef set<pair<string, string>> setpss;

void countCombinationForCups(vector<string>& icecreamsInBoxA, vector<string>& icecreamsInBoxB) {
    setpss pairs;

}

void countCombinationForCones(vector<string>& icecreamsInBoxA, vector<string>& icecreamsInBoxB) {
    setpss pairs;
    for(int i=0; i<icecreamsInBoxA.size(); i++)
    {
        for (int j = 0; j < icecreamsInBoxB.size(); j++)
        {
            pairs.insert(make_pair(icecreamsInBoxA[i], icecreamsInBoxB[j]));
        }
    }
    cout <<"콘 개수는 :" << pairs.size();
    /*for (setpss::iterator iter = pairs.begin(); iter != pairs.end(); iter++)
    {
        cout << iter->first << "  " << iter->second <<  endl;
    }*/
    for (setpss::iterator it = pairs.begin(); it != pairs.end(); it++) {

        //TODO
        cout << it->first << " " << it->second << endl;
    }
}

int main() {

    int icecreamNA = 6;
    int icecreamNB = 5;
    const char* boxA[6] = { "banana","choco","peach","choco","peach","rainbow" };
    const char* boxB[5] = { "kiwi","apple","peach","choco","peach" };

    vector<string> icecreamsInBoxA;
    vector<string> icecreamsInBoxB;

    for (int i = 0; i < icecreamNA; i++)
        icecreamsInBoxA.push_back(string(boxA[i]));
    for (int i = 0; i < icecreamNB; i++)
        icecreamsInBoxB.push_back(string(boxB[i]));

    typedef set<pair<string, string>> setpss;
    //set는 중복이 불가하므로 이렇게 하는 경우가 많다 

    countCombinationForCones(icecreamsInBoxA, icecreamsInBoxB);
    //countCombinationForCups(icecreamsInBoxA, icecreamsInBoxB);

    return 0;
}