#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int n,i,a,b,count;
    bool isPrime=true;
    int calc()
    {
for(i=a;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
cout<<i<<endl;
}
         return 0;
    }
};
int main()
{
  sample s;
  cout << "Enter a positive number: ";
  cin >> s.a;
  cin>>s.b;
  s.calc();
  return 0;
}
