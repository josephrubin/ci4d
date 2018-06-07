default : ary.c ary/safeary.c test.c
	gcc ary.c ary/safeary.c test.c -o out
