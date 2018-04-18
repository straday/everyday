#include <iostream>

#include <math.h>

using namespace std;

int main()
{
  double a,b,c,x1,x2,D;
  cout <<"Vvedite chisla"<<endl;
  cin>>a;
  cin>>b;
  cin>>с;
  D=(b^2)-(4*a*c);
  if (D>0)
    {
      
      х1=(-b-D)/2*a;
      х2=(-b+D)/2*a;
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
      
      
      
