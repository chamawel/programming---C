#include <stdio.h>

int i= 200, j;

int main(void) {
	
	_asm {
		mov ebx, i
		imul ebx, 2
		mov eax, -10
		add eax, ebx
		mov j, eax

	}

}