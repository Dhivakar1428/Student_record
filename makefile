out: main.o add_std.o delete.o sort.o modify.o print.o save.o
	cc main.c add_std.c delete.c sort.c modify.c print.c save.c -o out

main.o: main.c
	cc -c main.c

ad_std.o: add_std.c
	cc -c add_std.c

delete.o: delete.c
	cc -c delete.c

sort.o: sort.c
	cc -c sort.c

modify.o: modify.c
	cc -c modify.c

print.o: print.c
	cc -c print.c

save.o: save.c
	cc -c save.c
