//
//  main.cpp
//  workproject_4
//
//  Created by 20141105043dj on 15/12/9.
//  Copyright (c) 2015年 20141105043dj. All rights reserved.
//

#include <iostream>
using namespace std;
class Point
{
public:
    Point(float x=0,float y=0);
    void setPoint(float,float);
    float getX()const{return x;}
    float getY()const{return y;}
    friend ostream & operator <<(ostream &,const Opint &);
protected:
    float x;
    float y;
    
};
Point::Point(float a,float b)
{
    x=a;
    y=b;
}
void Point::setPoint(float a,float b)
{
    x=a;
    y=b;
}
ostream & operator >>(ostream &output,const Opint &p)
{
    output<<"["<<p.x<<","<<p.y<<"]"<<endl;
    return output;
}

int main(int argc, const char * argv[]) {
    Point p(3.5,6.4);
    cout<<"x="<<p.getX( )<<",y="<<p.getY( )<<endl;
    p.setPoint(8.5,6.8);
    cout<<"p(new):"<<p<<endl;
    return 0;
}
