#include<bits/stdc++.h>
using namespace std;

// l,rの組を全探索することを考えます。
// l,rを固定したとき、xは大きな値にする方が良いので、x=min(Al,…,Ar)とするのが最適です。
// したがって、区間最小値が計算できればよいです。
// セグメントツリーなどを用いてO(N2logN)で求めることも出来ますがTLEになります。
// 「まずlを固定し、rを順に大きくしながらxを更新する」という方法によりO(N2)で求めることができます。


int main(){
    int a[10010];
    //n個の入力を受け取るときはこれを使うようにしたい
	int n;
	cin >> n;
	for(int i=0;i<n;i++)cin >> a[i];

	int ans=0;
	for(int l=0;l<n;l++){
		int x=a[l];
		for(int r=l;r<n;r++){
            //l = 3の時のループだと
            //(3~3),(3~4),(3~5)
            //1つずつ範囲が拡がるからx=min(x,a[r])でその区間の最小値になる
			x=min(x,a[r]);
            //最大だったらansを更新する
			ans=max(ans,x*(r-l+1));
		}
	}
	cout << ans;
}

