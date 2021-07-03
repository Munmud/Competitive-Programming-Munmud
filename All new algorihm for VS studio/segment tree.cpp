
#define mx 100001
int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}

// i থেকে j তম (ইনক্লুসিভ) sum বের করি
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b) return 0; 
    if (b >= i && e <= j) return tree[node]; 
        
    int Left = node * 2; 
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    return query(Left, b, mid, i, j) + query(Right, mid + 1, e, i, j); 
}

// i তম ইনডেক্সের ভ্যালু চেঞ্জ করে newvalue রাখি
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b) return; 
    if (b >= i && e <= i) { 
        tree[node] = newvalue; 
        return;
    }
    int Left = node * 2; 
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}