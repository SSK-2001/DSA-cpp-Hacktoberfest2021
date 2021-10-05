#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// N meetings in a room problem
void maxMeetings(int s[] , int e[] , int n){
    sort(e,e+n);
    int i;
    vector<int> answer;
    answer.push_back(0);
    int end = e[0];
    for(i=1;i<=n;++i){
      if(s[i]>end){
          answer.push_back(i);
          end = e[i];
      }
    }
    vector<int>::iterator ptr;
    for(ptr=answer.begin();ptr!=answer.end();++ptr){
        cout << *ptr <<endl;

    }
}
int main(){

    int s[] = {1,0,3,8,5,8};
    int e[] = {2,6,4,9,7,9};
    int n = 6;
    maxMeetings(s,e,n);
    return 0;
}