#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2!=0){
        cout << "Weird" <<endl;
    }
    else if (N%2 == 0 && (N>=2 && N<5)) {
        cout << "Not weird" << endl;
    }
    else if (N%2 == 0 && (N>=6 && N<20)) {
        cout << "Weird" << endl;
    }
    else {
        cout << "Not Weird";
    }

    return 0;
}
