
#include <bits/stdc++.h>
using namespace std ;

double area(double r , double angle)
{
    return 0.5*r*r*angle ;
}

double angle(double a, double b, double c)
{
    return acos( ( (b*b)+(c*c)-(a*a) ) / (2*b*c) ) ;
}


void _main_main()
{
    double a,b,c ;
    cin >> a >> b >> c ;

    double s = (a+a+b+b+c+c)/2.0 ;
    double total_area =  sqrt(s*(s-a-b)*(s-b-c)*(s-c-a)) ;

    total_area-= area(a,angle(b+c,c+a,a+b)) ;
    total_area-= area(b,angle(c+a,a+b,b+c)) ;
    total_area-= area(c,angle(a+b,b+c,c+a)) ;


    cout << fixed << setprecision(10) << total_area << "\n" ;


}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
