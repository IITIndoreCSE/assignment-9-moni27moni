#include<iostream>
using namespace std;

struct point{
    float x,y;
};
int main()
{
    int count=0;
    cout<<"Enter coordinates for 7 points (x,y):"<<endl;
    point points[7];
        for(int i=0;i<7;i++)
        {
            cout<<"point "<<i+1<<" -x:"<<endl;
            cin>>points[i].x;
            cout<<"point "<<i+1<<" -y:"<<endl;
            cin>>points[i].y;
    }
    for(int j=0;j<7;j++)
    {
        if(points[j].x>0&&points[j].y>0)
        {
            count=count+1;
            
        }
        
    }
cout<<"Number of points in the first quadrant:"<<count;
return 0;
}
