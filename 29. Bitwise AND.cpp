#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main() 
{
    int T, n, k, i, j, val;
    scanf("%d",&T);
    while (T > 0) 
    {
        int maximum = 0;
        scanf("%d%d",&n, &k);
        int max_val = 0;
        int a = 0, b = k - 1;
    
    for (a = n; a > 2; a--) 
    {
        if (a == b)
            continue;
        if ((a & b) > max_val) 
        {
            max_val = a & b;
        }
    }
    
    printf("%d\n",max_val );
    
    T--;
  }
  return 0;
}

