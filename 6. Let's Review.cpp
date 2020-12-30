#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    for(int a = 0;a<N;a++){
        string s;
        cin >> s;
        
        for(int b = 0;b<s.length();b++){
            if(b%2 == 0){
                cout << s[b];
            }
        }
        cout << " ";
        for(int b = 0;b<s.length();b++){
           if(b%2 != 0){
                cout << s[b];
            } 
        }
        cout << endl;
    }
       
    return 0;
}
