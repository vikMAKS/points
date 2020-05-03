#include <iostream>
using namespace std;
//One student is to the professor.For 1+2+3+...+n minutes talking, the student is gaining n points for the bad test he made before.But after long talking the student do not remeber how many points he want.Let's help him
int main() {
    int min, n;
    cin>>min;
    int a = 3;
    for(int i=a; i>0; i--) {
        n+=i;
    }
    while(n != min) {
        if(min > n) {
            a++;
            n=0;
        for(int i=a; i>0; i--) {
        n+=i;
        }
        }
        if(min < n) {
            a--;
            n=0;
            for(int i=a; i>0; i--) {
             n+=i;
             }
        }
        if(min == n) {
            cout<<a;
            break;
        }
    }
    return 0;
}
