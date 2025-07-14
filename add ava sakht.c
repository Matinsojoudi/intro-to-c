#include <stdio.h>
#include <stdlib.h>

int add_aval(int p, int i)
{
	if(p > 1000) return 0;
	
    if (p % i == 0) return add_aval(p + 1, 2);
    
    if (i * i > p) {
        printf("%d\n", p);
        return add_aval(p + 1, 2);
    }
    return add_aval(p, i + 1);
}

int main() {
	add_aval(100, 2);
	return 0;
}