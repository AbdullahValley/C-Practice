#include<bits/stdc++.h>
using namespace std;
int main()
{
    int xb[16]={100,110,120,129,140,149,158,168,179,188,198,209,219,226,234,240};
    int yb[16]={0,3,6,10,15,20,26,32,37,34,30,27,23,19,16,14};
    double xf=0,yf=60,s=20;
    double distance,sintheta,costheta,d;
    int i,X;
    cout<<"interval"<<"    "<<"xf"<<"    "<<"yf"<<"     "<<"xb"<<"    "<<"yb"<<"    "<<"distance"<<"      "<<"sintheta"<<"       "<<"costheta"<<endl;
    for(i=0;i<=15;i++)
    {

        cout<<i<<"    "<<xf<<"    "<<yf<<"     "<<xb[i]<<"    "<<yb[i]<<"    ";

        d=double(((xb[i]-xf)*(xb[i]-xf))+((yb[i]-yf)*(yb[i]-yf)));
        distance=sqrt(d);
        cout<<distance;
        cout<<"     ";

        if(distance<=12)
            goto X;

        sintheta=double((yb[i]-yf)/distance);
        cout<<sintheta;
        cout<<"     ";

        costheta=double((xb[i]-xf)/distance);
        cout<<costheta<<endl;

        xf=xf+(s*costheta);
        yf=yf+(s*sintheta);

    }

    cout<<"the fighter cannot shoot the bomber"<<endl;

    X:cout<<endl<<endl<<"the fighter can shoot the bomber"<<endl;

}


