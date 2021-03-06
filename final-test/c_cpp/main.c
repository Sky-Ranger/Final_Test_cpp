#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x;	
	printf("请输入整数，作为要入栈的内容\n");
        while ( ! stack_is_full() ) {
		scanf("%d", &x);
		stack_push(x);
	}
	
	printf("栈满，下面将输出栈里面的内容\n");
	while ( !stack_is_empty() ) {
		x = stack_pop();

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
