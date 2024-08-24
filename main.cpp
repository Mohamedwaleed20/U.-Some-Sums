#include <iostream>
#include <cmath>
#include<algorithm>

using namespace std ;

int main()
{
   int n , a , b;
   cin >> n >> a >> b ;
   if((a<1||a>36)&&(b<1||b>36))
   {
       cout << "error" ;
   }
   int ans = 0 ;
   int mx = max(a,b);
   int mn = min(a,b);
   for(int i = 1 ; i<=n ; i++)
   {
       int x = i ;
       int sum = 0 ;
       while(x>0)
       {
           sum=sum+(x%10);
           x=x/10;
       }
       if(sum>=mn&&sum<=mx)
       {
           ans = ans + i ;
       }
   }
   cout << ans << endl;

    return 0;
}
