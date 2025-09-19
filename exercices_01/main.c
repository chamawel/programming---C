/*

--- EXERCICES LIST 01 : INTEGER CALCULATIONS ---
	
	### EX 1 ###

	-------------------------------------------------------------
	| Binary (8bits) |		Decimal		|		hexadecimal		|    
	-------------------------------------------------------------
	|	0100 1011	 |		75			|			4B			| 
	-------------------------------------------------------------
	|	0111 1011	 |		123			|			7B			| 
	-------------------------------------------------------------
	|	1110 1010	 |		234			|			EA			| 
	-------------------------------------------------------------
	|	1100 1011	 |		203			|			CB			|
	-------------------------------------------------------------
	|	0010 1011	 |		43			|			2B			| 
	-------------------------------------------------------------


*/

/*
	### EX 3 ###
________________________
	- 	mov eax, 143
		mov i, eax
________________________
	-	mov eax, j
		mov i, eax
________________________
	-	mov eax, j
		mov ebx, i
		add ebx, eax
		mov i, ebx
________________________
	-	mov eax, j
		mov ebx, i
		add ebx, eax
		sub ebx, 8
		mov i, ebx
________________________
	- 	mov eax, j
		mov ebx, i
		imul ebx, 8
		add ebx, eax
		mov i, ebx
________________________
	-	mov eax, j
		mov ebx, i
		imul eax, 8
		add ebx, eax
		mov i, ebx
________________________
	-	mov eax, j
		mov ebx, i
		imul ebx, eax
		add ebx, 8
		mov i, ebx
________________________
	-	mov eax, j
		mov ebx, i
		mov ecx, 2
		imul ebx, eax
		sub ecx, ebx
		add ecx, 8
		mov i, ecx
________________________
	-	mov eax, j
		mov ebx, i
		add ebx, eax
		imul ebx, 8
		mov i, ebx
________________________
	-	mov eax, j
		mov ebx, i
		mov ecx, 2
		sub ecx, ebx
		add eax, 8
		imul ecx, eax
		mov i, ecx
________________________
	-	mov eax, j
		mov ebx, i
		add  eax, 125
		imul eax, i
		imul eax, j
		sub  eax, i
		imul eax, 2
		mov i, eax
________________________
	-	mov eax, j
		mov ebx, i
		mov ecx, -82
		mov edx, 2
		add ecx, 75		// -82 + 75			=> -7
		sub edx, ecx	// 2 - (-82+75)		=> 9
		sub ebx, 3		// -36 - 3			=> -39
		imul edx, eax	// 9 * 25
		imul edx, ebx	// 225 *  -39		=> -8775
		mov j, edx

*/