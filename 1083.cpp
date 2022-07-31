/*
[백준 1083번] 소트문제
문제 내용: 
    크키가 N인 배열 A에서 연속된 두 원소를 교환해 S번 교환해 정렬해 소트한 결과가 사전순으로 가장 뒷서는 것을 출력한다
    0<N<=50이다
*/

#include <iostream>
#include <algorithm>


using namespace std;

int A[51];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int index = 0;
    int N, S;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    cin >> S;

    for(int i = 0; i < N; i++){
        int max = A[i];
        int idx = i;

        while(S == 0){
            break;
        }
    
        int count = min(N, S + i + 1);

        for(int j = i+1; j <count; j++){
            if(max < A[j]){
                max = A[j];
                idx = j;
            }
        }
        S -= idx - i;

        for(int j = idx; j>i; j--){
            A[j] = A[j-1];
        }
        A[i] = max;
        
    }    
    for(int i  = 0; i < N ; i++){
        cout << A[i] <<" ";
    }
}

/*
int main()
{
  int n, s, v[50], i, j;
  cin >> N
  for(i=0;i<n;i++) scanf("%d",v+i);
  scanf("%d",&s);
  for(i=0;i<n && s;i++)
  {
    int max=v[i], maxi=i;
    for(j=i+1;j<n && j<=i+s;j++) if(max<v[j]) max=v[j],maxi=j;
    s-=maxi-i;
    while(maxi > i) v[maxi]=v[maxi-1],maxi--;
    v[i]=max;
  }
  for(i=0;i<n;i++) printf("%d ", v[i]); putchar('\n');
}
출처: https://sdev.tistory.com/353 [잡동사니 개발자의 블로그:티스토리]
*/