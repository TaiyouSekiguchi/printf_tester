NAME = diff.txt

$(NAME) :
	gcc ft_test.c libftprintf.a
	./a.out > ft_result.txt
	gcc real_test.c libftprintf.a
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

minimam :
	gcc ft_test.c libftprintf.a -D BONUS=1 -D MINIMAM=1
	./a.out > ft_result.txt
	gcc real_test.c libftprintf.a -D BONUS=1 -D MINIMAM=1
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

minus :
	gcc ft_test.c libftprintf.a -D BONUS=1 -D MINUS=1
	./a.out > ft_result.txt
	gcc real_test.c libftprintf.a -D BONUS=1 -D MINUS=1
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

zero :
	gcc ft_test.c libftprintf.a -D BONUS=1 -D ZERO=1
	./a.out > ft_result.txt
	gcc real_test.c libftprintf.a -D BONUS=1 -D ZERO=1
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

precision :
	gcc ft_test.c libftprintf.a -D BONUS=1 -D PRECISION=1
	./a.out > ft_result.txt
	gcc real_test.c libftprintf.a -D BONUS=1 -D PRECISION=1
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

all_one :
	gcc ft_test.c libftprintf.a -D BONUS=1 -D MINIMAM=1 -D MINUS=1 -D ZERO=1 -D PRECISION=1 -D ALL_ONE=1
	./a.out > ft_result.txt
	gcc real_test.c libftprintf.a -D BONUS=1 -D MINIMAM=1 -D MINUS=1 -D ZERO=1 -D PRECISION=1 -D ALL_ONE=1
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

clean :
	rm diff.txt
