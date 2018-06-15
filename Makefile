safeary_test : *.h ary.c ary/safeary.c test/safeary_test.c
	gcc ary.c ary/safeary.c test/safeary_test.c -o out

seqlist_test : *.h list.c list/seqlist.c test/seqlist_test.c
	gcc -std=c99 -Wall -Wextra list.c list/seqlist.c test/seqlist_test.c -o out
