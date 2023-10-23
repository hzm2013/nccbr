#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int x = 0;
    scanf("%lf", &n);
    char s[555], t[555];
    scanf("%s%s", s, t);
    int lens = strlen(s);
    int lent = strlen(t);
    for(int i = 0; i < lens; i++)
    {
        if(s[i] == t[i])
        {
            x++;
        }
    }
    if(1.0 * x / lens >= n)
    {
        printf("yes");
    }
    return 0;
}
