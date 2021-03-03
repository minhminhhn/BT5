#include <iostream>
using namespace std;
int check(int k, int n)
{
    if (0<=k && k<=n && 1<=n && n<=20) return 1;
    return 0;
}
int tohop(int k, int n)
{
    if(check(k,n)==0) return 0;
    int x=n, y=k;
    for (int i=1; i<k; i++)
    {
        x*= n-i;
        y*=i;
    }
        return x/y;

}
void nhap(int k[], int n[], int *soPhanTu)
{
    for(int i=0;;i++)
    {
        cin >> k[i] >> n[i];
        if (k[i]==-1 && n[i]==-1) break;
        (*soPhanTu)++;
    }
}
int main()
{
    int sophantu=0;
    int k[1000], n[1000];
    nhap(k, n, &sophantu);
    for (int i=0; i<sophantu; i++) cout << tohop(k[i], n[i]) << endl;
}
