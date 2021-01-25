#include<stdio.h>

int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int sum=0;
	for(int i=0;i<n;i++){
		int v,p;
		scanf("%d%d",&v,&p);
        //Pは%だからv*p/100としたくなるところ
        //少数の問題を生むため合えて/100しない
		sum+=v*p;
		if(sum>x*100){// p/100しなかったのをここで調整
            //「何回目で超えるか」なので超えた時にreturnでよかった
			printf("%d\n",i+1);
			return 0;
		}
	}
	puts("-1");
}
