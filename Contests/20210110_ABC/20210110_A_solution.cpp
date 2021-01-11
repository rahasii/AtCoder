#include <stdio.h>
#include <algorithm>

int ri() {
	int n;
    //scanf() Cからある入力の受取り
    //cinより少し早いらしい
	scanf("%d", &n);
	return n;
}

int main() {
	int x = ri();
	int y = ri();
    //小さいほうに3を足した数 > 大きいほう で判定、なるほど。
	puts(std::min(x, y) + 3 > std::max(x, y) ? "Yes" : "No");
	
	return 0;
}

