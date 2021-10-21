# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 15:21:45 by tsekiguc          #+#    #+#              #
#    Updated: 2021/10/21 15:49:09 by tsekiguc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diff.txt
CC = gcc
#CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I../
LIB_DIR = -L ../
LIB = -lftprintf
BONUS = -D BONUS=1
MINIMAM = -D MINIMAM=1
MINUS = -D MINUS=1
ZERO = -D ZERO=1
PRECISION = -D PRECISION=1
ALL_ONE = -D ALL_ONE=1

$(NAME) :
	make -C ..
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) ft_test.c
	./a.out > ft_result.txt
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) real_test.c
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > $@

minimam :
	make -C ..
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) ft_test.c $(BONUS) $(MINIMAM)
	./a.out > ft_result.txt
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) real_test.c $(BONUS) $(MINIMAM)
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

minus :
	make -C ..
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) ft_test.c $(BONUS) $(MINUS)
	./a.out > ft_result.txt
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) real_test.c $(BONUS) $(MINUS)
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

zero :
	make -C ..
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) ft_test.c $(BONUS) $(ZERO)
	./a.out > ft_result.txt
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) real_test.c $(BONUS) $(ZERO)
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

precision :
	make -C ..
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) ft_test.c $(BONUS) $(PRECISION)
	./a.out > ft_result.txt
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) real_test.c $(BONUS) $(PRECISION)
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

all_one :
	make -C ..
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) ft_test.c $(BONUS) $(MINIMAM) $(MINUS) $(ZERO) $(PRECISION) $(ALL_ONE)
	./a.out > ft_result.txt
	$(CC) $(INCLUDE) $(LIB_DIR) $(LIB) real_test.c $(BONUS) $(MINIMAM) $(MINUS) $(ZERO) $(PRECISION) $(ALL_ONE)
	./a.out > real_result.txt
	diff -u ft_result.txt real_result.txt > diff.txt

clean :
	make fclean -C ..
	rm diff.txt a.out ft_result.txt real_result.txt
