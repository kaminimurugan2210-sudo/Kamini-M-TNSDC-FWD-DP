#include<iostream>
using namespace std;
int main()
{
int x1,y1,x2,y2;
cout << "enter coordinater of firstpoint(x1,y1):" ;
cin >> x1 >>y1;
cout << "enter coordinater of secondpoint(x2,y2):" ;
cin >> x2 >>y2;
if(x1==x2&&y1==y2)
{
cout <<"the points are equal:" << endl;
}
else
{
cout << "the points are not equal:" << endl;
}
return 0;
}
