#include<iostream>
#include <typeinfo>
using namespace std;
class point{
    public:
    float x,y;
    point(){
        x=0;
        y=0;
    }
    void input(int n){
        cout<<"Enter x and y of the"<<n<<" point\n";
        cin>>x>>y;
    }
};
class line{
    public:
    point p1,p2;
    line(){
        p1.x=0;
        p1.y=0;
        p2.x=0;
        p2.y=0;
    }
    line(int x1,int y1,int x2,int y2){
        p1.x=x1;
        p1.y=y1;
        p2.x=x2;
        p2.y=y2;
    }
    line operator+(line l){
        line temp;
        temp.p1.x=p1.x+l.p1.x;
        temp.p1.y=p1.y+l.p1.y;
        temp.p2.x=p2.x+l.p2.x;
        temp.p2.y=p2.y+l.p2.y;
        return temp;
     }
     line operator*(line l){
        line temp;
        temp.p1.x=p1.x*l.p1.x;
        temp.p1.y=p1.y*l.p1.y;
        temp.p2.x=p2.x*l.p2.x;
        temp.p2.y=p2.y*l.p2.y;
        return temp;
     }
    void input(){
        cout<<"Enter lines end co-ordinates\n";
        p1.input(1);
        p2.input(2);
    }
    void show(){
        cout<<"The end co-ordinates of the line is : \n";
        cout<<"A : x = "<<p1.x<<" y = "<<p1.y<<" B : x = "<<p2.x<<" y = "<<p2.y<<endl;
    }
};
int main(){
    line l1(4,6,7,9);
    line l2(5,3,7,9);
    line l3,l4;
    l3=l1+l2;
    l3.show();
    l4=l1*l3;
    (l1*l3+ l4+l2).show();
    // cout<<typeid(l1.p2.x).name();
    
   // l1.input();
    //l1.show();
}


