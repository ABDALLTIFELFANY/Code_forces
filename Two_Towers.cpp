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
    int a,b,x,y,f;
    string str1;
    string str2;
    cin >> a;
    while(a)
    {
        cin >> x >> y;
 
        int count_b = 0;
        int count_r = 0;
        cin >> str1;
        cin >> str2;
        reverse(str2.begin(), str2.end());
        str1 += str2;
        int c = 0;
        for(int i = 0; i < str1.size() - 2;i++)
        {
            if(str1[i] == 'R' && str1[i + 1] == 'R' && str1[i + 2] == 'R')
                count_r++;
            if(str1[i] == 'B' && str1[i + 1] == 'B' && str1[i + 2] == 'B')
                count_b++;
        }
        for(int i = 0; i < str1.size() - 1;i++)
        {
            if(str1[i] == 'R' && str1[i + 1] == 'R')
                c++;
            if(str1[i] == 'B' && str1[i + 1] == 'B')
                c++;
        }
        if(count_b != 0 || count_r != 0 || c > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
        
        a--;
    }
}
