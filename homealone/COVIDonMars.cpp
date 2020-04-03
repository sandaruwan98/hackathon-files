#include <iostream>
#include <math.h>

using namespace std;

unsigned long long f(int n){
  
    if (n==1){return 1;}    
    if (n==2)
    {
        return 2;
    }
    if (n==3)
    {
        return 7;
    }
    if (n==4)
    {
        return 20;
    }
    if (n==5)
    {
        return 61;
    }
    if (n==6){return 182;}
    if (n==7){return 547;}
    if (n==8){return 1640;}
    if (n==9){return 4921;}
    if (n==10){return 14762;}
    if (n==11 ){return  44287;}
    if (n==12 ){return  132860;}
    if (n==13 ){return  398581;}
    if (n==14 ){return  1195742;}
    if (n==15 ){return  3587227;}
    if (n==16 ){return  10761680;}
    if (n==17 ){return  32285041;}
    if (n==18 ){return  96855122;}
    if (n==19 ){return  290565367;}
    if (n==20 ){return  871696100;}
    if (n==21 ){return  2615088301;}
    if (n==22 ){return  7845264902;}
    if (n==23 ){return  23535794707;}
    if (n==24 ){return  70607384120;}
    if (n==25 ){return  211822152361;}
    if (n==26 ){return  635466457082;}
    if (n==27 ){return  1906399371247;}
    if (n==28 ){return  5719198113740;}
    if (n==29 ){return  17157594341221;}
    if (n==30 ){return  51472783023662;}
    

    return 2*f(n-1)+3*f(n-2);
    
}


int main()
{
    int t;
    cin >> t;
    cout << f(t);
     
    return 0;
}
