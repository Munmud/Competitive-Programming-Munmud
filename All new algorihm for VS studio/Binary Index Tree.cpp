

//----------- BIT Start here----------

int tree[1000002] ;

int query (int idx)
{
    int sum = 0 ;
    while( idx > 0 ){
        sum+= tree[idx] ;
        idx-= idx & (-idx) ;
    }
    return sum ;
}

void update(int idx , int x , int sz)
{
    while (idx <=sz)
    {
        tree[idx]+= x ;
        idx += idx & (-idx) ;
    }
}
//-----------BIT End here----------