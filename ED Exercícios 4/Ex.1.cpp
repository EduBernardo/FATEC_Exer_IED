Push(P,a);			|P:[a]			|-
Push(P,b);			|P:[b,a]		|-
Push(P,c);			|P:[c,b,a]		|-
Push(P,Top(P));		|P:[c,c,b,a]	|c	
Push(P,Pop(P));		|P:[c,c,b,a]	|c
Pop(P);				|P:[c,b,a]		|c
Push(P,e);			|P:[e,c,b,a]	|-
Pop(P);				|P:[c,b,a]		|e

