#include <iostream>

#include <math.h>

using namespace std;

int main()
{
  double a,b,c,x1,x2,D;
  cout <<"Vvedite chisla"<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  D=(b*b)-(4*a*c);
  if (D>0)
    {
      D=sqrt(D);
      x1=(-b-D)/2*a;
      x2=(-b+D)/2*a;
cout<<"Dva kornya "<<x1<< " and " <<x2<<endl;
    }
  if(D==0)
    {
      D=sqrt(D);
      x1=(0-b)/(2*a);
      cout <<"Koren "<<x1<<" "<<endl;
    }
  if(D<0)
    cout<<"Kornei net"<<endl;

}
      
      
      
