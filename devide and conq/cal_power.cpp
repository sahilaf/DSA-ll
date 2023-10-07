#include<bits/stdc++.h>
using namespace std;
int cal_power(int x,int y)
{
    int pow=1;
    int p1,p2;
    if(y==1)
    {
        pow*=x;
        return pow;
    }
    if(y==0)
    {
        pow*=1;
        return pow;
    }
    if(y%2==0)
    {
    p1=cal_power(x,y/2);
    p2=cal_power(x,y/2);
    return p1*p2;

    }
    else{
        p1=cal_power(x,(y/2)+1);
        p2=cal_power(x,y/2);
        return p1*p2;
    }
    

}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<cal_power(x,y);
}
