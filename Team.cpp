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
    int x,y,z,a,b;
 
    cin >> x;
    z = 0;
    vector<int>tab(3);
    while(x)
    {
        y = 0;
        while(y < 3)
            cin >> tab[y++];
        sort(tab.begin(),tab.end());
        if((tab[1] && tab[2]) == 1)
            z = z + 1;
        x--;
    }
    printf("%d\n", z);
}
