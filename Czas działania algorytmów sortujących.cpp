#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <bits/stdc++.h>

using namespace std;

void scal(ll *t, ll p, ll g, ll k) {
    ll i, j;
    ll* s = new ll[k+1];

  for (i = g+1; i>p; i--)
    s[i-1] = t[i-1];

  for (j = g; j<k; j++)
    s[k+g-j] = t[j+1];


  for(int l = p; l <= k; l++) {

    if(s[j] < s[i])
        t[l] = s[j--];
    else
        t[l] = s[i++];
  }


    delete[] s;
}

void mergsort(ll *t, ll p, ll k) {
    if (p < k) {
        int s = (p+k) / 2;
        mergsort(t, p, s);
        mergsort(t, s+1, k);
        scal(t, p, s, k);
    }
}
void insort(ll *t,ll n){
    for(ll i=1;i<n;i++){
        ll j=i-1;
        ll pom =t[i];
        while(j>=0 && t[j]>pom){t[j+1]=t[j--];}
        t[j+1]=pom;
    }}
void qsort(ll *t, ll p, ll k) {
    if (p >= k) {return;}
    ll pivot = t[(p + k) / 2];
    ll i = p - 1;
    ll j = k + 1;
    while (i<j) {
        do {i++;}
        while (t[i] < pivot);

        do {j--;}
        while (t[j] > pivot);

        if(i<j){swap(t[i], t[j]);}}
    qsort(t, p, j);
    qsort(t, j + 1, k);
}
void Selsort(ll *t,ll n)
{
    int m,p;
    for (ll i=0;i<n;i++)
    {
        m=i;
        for (ll j=i;j<n;j++) if (t[j]<t[m]) m=j;
        p=t[i];t[i]=t[m];t[m]=p;
    }

}
void Bubsort(ll n, ll t[])
{
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<n-i;j++)
            if (t[j]<t[j-1]) swap(t[j],t[j-1]);
    }
}

int main() {

    ll a;
    ll t[100000];
    srand(time(0));
    for(ll i=0;i<100000;i++){a=rand()%999999;t[i]=a;}
    ll *tmp=new ll[100000];
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    cout<<"DANE LOSOWE:"<<endl;
    clock_t x1=clock();
    qsort(tmp,0,100000);
    clock_t x2=clock();
    cout<<"QUICK SORT: "<< ((x2-x1)*100)/CLOCKS_PER_SEC<<"/100 s"<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    Selsort(tmp,100000);
    x2=clock();
    cout<<"SELECTION SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    Bubsort(100000, tmp);
    x2=clock();
    cout<<"BUBBLE SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    insort(tmp,100000);
    x2=clock();
    cout<<"INSERTION SORT: "<< ((x2-x1)*1000)/CLOCKS_PER_SEC<<"/1000 s"<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    mergsort(t,0, 100000);
    x2=clock();
    cout<<"MERGE SORT: "<< ((x2-x1)*100)/CLOCKS_PER_SEC<<"/100 s"<<"     ";
    cout<<endl;
    //
    //
    //
    cout<<"DANE UPORZADKOWANE ROSNACO:"<<endl;
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    qsort(tmp,0,100000);
    x2=clock();
    cout<<"QUICK SORT: "<<((x2-x1)*1000)/CLOCKS_PER_SEC<<"/1000 s"<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    Selsort(tmp,100000);
    x2=clock();
    cout<<"SELECTION SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    Bubsort(100000, tmp);
    x2=clock();
    cout<<"BUBBLE SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    insort(tmp,100000);
    x2=clock();
    cout<<"INSERTION SORT: "<<((x2-x1)*1000)/CLOCKS_PER_SEC<<"/1000 s"<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    mergsort(t,0, 100000);
    x2=clock();
    cout<<"MERGE SORT: "<<((x2-x1)*100)/CLOCKS_PER_SEC<<"/100 s"<<"     "<<endl;
    //
    //
    //
    cout<<"DANE UPORZADKOWANE MALJEJACO:"<<endl;
    a=99999;
    for(ll i=0;i<a;i++){swap(t[i],t[a]);a--;}
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    qsort(tmp,0,100000);
    x2=clock();
    cout<<"QUICK SORT: "<<((x2-x1)*1000)/CLOCKS_PER_SEC<<"/1000 s"<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    Selsort(tmp,100000);
    x2=clock();
    cout<<"SELECTION SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    Bubsort(100000, tmp);
    x2=clock();
    cout<<"BUBBLE SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    for(ll i=0;i<100000;i++){tmp[i]=t[i];}
    x1=clock();
    insort(tmp,100000);
    x2=clock();
    cout<<"INSERTION SORT: "<<(x2-x1)/CLOCKS_PER_SEC<<'s'<<"     ";
    x1=clock();
    mergsort(t,0, 100000);
    x2=clock();
    cout<<"MERGE SORT: "<<((x2-x1)*100)/CLOCKS_PER_SEC<<"/100 s"<<"     ";
    delete[]tmp;
}
