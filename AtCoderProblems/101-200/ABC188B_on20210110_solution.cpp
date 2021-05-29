#include <stdio.h>

//方針としては同様の内容で解答できていた模様
int ri() {
	int n;
	scanf("%d", &n);
	return n;
}

int main() {
	int n = ri();
	int a[n];
	for (int i = 0; i < n; i++) a[i] = ri();
	int b[n];
	for (int i = 0; i < n; i++) b[i] = ri();
	
	int prod = 0;
	for (int i = 0; i < n; i++) prod += a[i] * b[i];
	
    //この省略した書き方も自然に使えるようになりたい
	puts(prod ? "No" : "Yes");
	
	return 0;
}

