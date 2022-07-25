#include <bits/stdc++.h>
using namespace std;
int main()
{
    
   int n;//371
   cin>>n;
   int s=n;
   int f=n;
   int ld;

   int ans=0;
  while(n>0)
  {   
      ld=n%10;
      ans=1+ans;
      n=n/10;
  }// ans 3

//   3^3+7^3+1^3--> no itself
  int power=ans; //3
  int b=0;
  while(s>0)
  {
      int a=s%10;
      b=b+pow(a,power);
      s=s/10;
  }
//   cout<<b<<endl;
   if(b==f)
   {
    cout<<"true"<<endl;   
   }
 else 
 {
       cout<<"false"<<endl;   
 }

    return 0;
}
