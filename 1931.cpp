/*
[백준 1931번] 회의실 배정
문제 내용:
    N개의 회의, 시작시간과 끝나는 시간이 주어진 경우 회의실을 사용할 수 있는 회의의 최대 개수를 찾아보자.
    N(1 ≤ N ≤ 100,000), 시작 시간과 끝나는 시간은 2^31-1보다 작거나 같은 자연수 또는 0이다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> meeting(N);

    for(int i = 0; i<N;i++){
        cin >>  meeting[i].second >> meeting[i].first;  //second가 시작하는 시간, first는 끝나는 시간
    }

    sort(meeting.begin(), meeting.end());   //끝나는 시간으로 정렬

    int time = 0;
    int result = 0;

    for(int i = 0; i<N; i++){
        if(time <= meeting[i].second){
            time = meeting[i].first;     //끝나는 시간
            result += 1;
        }
    }
    cout << result;
}