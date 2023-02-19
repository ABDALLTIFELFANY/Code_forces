#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <unistd.h>
#include <unistd.h>
#include <algorithm>
#include<map>
#include<cmath>
#include<cstring>
#include<sstream>
#include <set>
#include <unordered_set>
#include <cstring>
#include <string.h>
#include <queue>
#define ll long long
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    int ans = 0;
    for(int i = 0 ; i < n;i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n;i++)
    {
        if(v[i] >= v[k - 1] && v[i])
            ans++;
    }
    cout << ans << endl;
}
