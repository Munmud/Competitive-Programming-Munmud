#include <bits/stdc++.h>

#define MEM(a, b)           memset(a, (b), sizeof(a))
#define CLR(a)              memset(a, 0, sizeof(a))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define ABS(X)              ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                ( (X) * (X) )
#define SZ(V)               (int )V.size()
#define FORN(i, n)          for(int i = 0; i < n; i++)
#define FORAB(i, a, b)      for(int i = a; i <= b; i++)
#define ALL(V)              V.begin(), V.end()
#define ALLR(V)              V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>

using namespace std;
int arr[100005];
int tree[100005];
void update(int index , int value  , int n )
{
    while (index <= n)
    {
        tree[index]+=value ;
        index += index & (-index) ;
    }
}
int query (int index)
{
    int sum = 0;
    while (index>0)
    {
        sum+=tree[index];
        index -= index & (-index);
    }
    return sum ;
}

int main ()
{
    //hitAi;
    int n , x , testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    scanf("%d", &testCase);
    FORAB(t,1,testCase)
    {
        //MEM(arr,0);
        MEM(tree,0);
        int q ;


        scanf("%d %d", &n, &q);
        FORAB(i,1,n)
        {
            scanf("%d", &arr[i]); ;
            update(i,arr[i],n);
        }


        printf ("Case %d:\n",t);


        while (q--)
        {
            scanf("%d", &x);

            switch(x)
            {
                    case 1:
                        int index ;
                        scanf("%d", &index);
                        printf ("%d\n",arr[index+1]);
                        update(index+1,-arr[index+1],n);
                        arr[index+1] = 0;
                        break;

                    case 2:
                        int idx , value ;
                        scanf ("%d %d" ,&idx ,&value);
                        arr[idx+1] += value ;
                        update(idx+1 ,value ,n);
                        break ;

                    case 3:
                        int a , b ;
                        scanf ("%d %d" ,&a ,&b);
                        printf ("%d\n",query(b+1)-query(a));
                        break ;
            }

        }
    }
}
