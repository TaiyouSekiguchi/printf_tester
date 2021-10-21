/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:16:17 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/10/21 15:42:25 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	ret_put(int ret)
{
	printf("return is [%d]\n", ret);
}

int main(void)
{
//	int	ret;

	printf("********** Mandatory Part ***********\n");

	ret_put(printf("Hello, 42Tokyo!!\n"));
	ret_put(printf("%c\n", 'a'));
	ret_put(printf("answer is %c\n", '@'));
	ret_put(printf("%c %c %c\n", '@', '!', '*'));

	ret_put(printf("%s\n", "Hello, 42Tokyo!!"));
	ret_put(printf("Aikotoba ha %s da!!\n", "Hirake goma!!"));
	ret_put(printf("empty string %s\n", ""));
	ret_put(printf("NULL address %s\n", NULL));
	ret_put(printf("%s %s %s\n", ";)", "", NULL));

	ret_put(printf("%d\n", 42));
	ret_put(printf("%d\n", -33));
	ret_put(printf("My age is %d\n", 2157784));
	ret_put(printf("The temperature ritht now is %d degrees.\n", -874453));
	ret_put(printf("%d %d %d\n", INT_MAX, INT_MIN, 0));

	ret_put(printf("%i\n", 42));
	ret_put(printf("%i\n", -33));
	ret_put(printf("My age is %i\n", 2157784));
	ret_put(printf("The temperature ritht now is %i degrees.\n", -874453));
	ret_put(printf("%i %i %i\n", INT_MAX, INT_MIN, 0));

	ret_put(printf("%u\n", 333));
	ret_put(printf("My age is %u\n", 2147483699));
	ret_put(printf("%u %u %u\n", UINT_MAX, INT_MAX, 0));

	ret_put(printf("%x\n", 584739));
	ret_put(printf("My age is %x\n", 2147483699));
	ret_put(printf("%x %x %x\n", UINT_MAX, INT_MAX, 0));

	ret_put(printf("%X\n", 584739));
	ret_put(printf("My age is %X\n", 2147483699));
	ret_put(printf("%X %X %X\n", UINT_MAX, INT_MAX, 0));

	ret_put(printf("%c %s %d %i %u %x %X\n", '&', "Marvin!!", 42, 38873, 2147483648, 73627, 884785));
	printf("\n");

#ifdef BONUS
	printf("********** Bonus Part ***********\n");
#ifdef MINIMAM
printf("********** Minimam field ***********\n");
	ret_put(printf("%5c!\n", 'a'));

	ret_put(printf("%20s!\n", "Urameshi Yusuke"));
	ret_put(printf("%20s!\n", ""));
	ret_put(printf("%20s!\n", NULL));

	ret_put(printf("%15d!\n", 1988));
	ret_put(printf("%15d!\n", -2134));
	ret_put(printf("%15d!\n", INT_MIN));
	ret_put(printf("%15d!\n", INT_MAX));
	ret_put(printf("%15d!\n", 0));

	ret_put(printf("%15i!\n", 1988));
	ret_put(printf("%15i!\n", -2134));
	ret_put(printf("%15i!\n", INT_MIN));
	ret_put(printf("%15i!\n", INT_MAX));
	ret_put(printf("%15i!\n", 0));

	ret_put(printf("%15u!\n", 2147483649));
	ret_put(printf("%15u!\n", UINT_MAX));
	ret_put(printf("%15u!\n", 0));

	ret_put(printf("%15x!\n", 42));
	ret_put(printf("%15x!\n", 123456));
	ret_put(printf("%15x!\n", INT_MAX));
	ret_put(printf("%15x!\n", UINT_MAX));
	ret_put(printf("%15x!\n", 0));

	ret_put(printf("%15X!\n", 42));
	ret_put(printf("%15X!\n", 123456));
	ret_put(printf("%15X!\n", INT_MAX));
	ret_put(printf("%15X!\n", UINT_MAX));
	ret_put(printf("%15X!\n", 0));
#endif
#ifdef MINUS
	printf("********** Minus flag ***********\n");
	ret_put(printf("%-5c!\n", 'a'));

	ret_put(printf("%-20s!\n", "Urameshi Yusuke"));
	ret_put(printf("%-20s!\n", ""));
	ret_put(printf("%-20s!\n", NULL));

	ret_put(printf("%-15d!\n", 1988));
	ret_put(printf("%-15d!\n", -2134));
	ret_put(printf("%-15d!\n", INT_MIN));
	ret_put(printf("%-15d!\n", INT_MAX));
	ret_put(printf("%-15d!\n", 0));

	ret_put(printf("%-15i!\n", 1988));
	ret_put(printf("%-15i!\n", -2134));
	ret_put(printf("%-15i!\n", INT_MIN));
	ret_put(printf("%-15i!\n", INT_MAX));
	ret_put(printf("%-15i!\n", 0));

	ret_put(printf("%-15u!\n", 2147483649));
	ret_put(printf("%-15u!\n", UINT_MAX));
	ret_put(printf("%-15u!\n", 0));

	ret_put(printf("%-15x!\n", 42));
	ret_put(printf("%-15x!\n", 123456));
	ret_put(printf("%-15x!\n", INT_MAX));
	ret_put(printf("%-15x!\n", UINT_MAX));
	ret_put(printf("%-15x!\n", 0));

	ret_put(printf("%-15X!\n", 42));
	ret_put(printf("%-15X!\n", 123456));
	ret_put(printf("%-15X!\n", INT_MAX));
	ret_put(printf("%-15X!\n", UINT_MAX));
	ret_put(printf("%-15X!\n", 0));
#endif
#ifdef ZERO
	printf("********** Zero flag ***********\n");
	ret_put(printf("%05c!\n", 'a'));

	ret_put(printf("%020s!\n", "Urameshi Yusuke"));
	ret_put(printf("%020s!\n", ""));
	ret_put(printf("%020s!\n", NULL));

	ret_put(printf("%015d!\n", 1988));
	ret_put(printf("%015d!\n", -2134));
	ret_put(printf("%015d!\n", INT_MIN));
	ret_put(printf("%015d!\n", INT_MAX));
	ret_put(printf("%015d!\n", 0));

	ret_put(printf("%015i!\n", 1988));
	ret_put(printf("%015i!\n", -2134));
	ret_put(printf("%015i!\n", INT_MIN));
	ret_put(printf("%015i!\n", INT_MAX));
	ret_put(printf("%015i!\n", 0));

	ret_put(printf("%015u!\n", 2147483649));
	ret_put(printf("%015u!\n", UINT_MAX));
	ret_put(printf("%015u!\n", 0));

	ret_put(printf("%015x!\n", 42));
	ret_put(printf("%015x!\n", 123456));
	ret_put(printf("%015x!\n", INT_MAX));
	ret_put(printf("%015x!\n", UINT_MAX));
	ret_put(printf("%015x!\n", 0));

	ret_put(printf("%015X!\n", 42));
	ret_put(printf("%015X!\n", 123456));
	ret_put(printf("%015X!\n", INT_MAX));
	ret_put(printf("%015X!\n", UINT_MAX));
	ret_put(printf("%015X!\n", 0));
#endif
#ifdef PRECISION
	printf("********** Precision flag ***********\n");
	ret_put(printf("%.5c!\n", 'a'));

	ret_put(printf("%.20s!\n", "Urameshi Yusuke"));
	ret_put(printf("%.10s!\n", "Urameshi Yusuke"));
	ret_put(printf("%.0s!\n", "Urameshi Yusuke"));
	ret_put(printf("%.s!\n", "Urameshi Yusuke"));
	ret_put(printf("%.20s!\n", ""));
	ret_put(printf("%.20s!\n", NULL));

	ret_put(printf("%.15d!\n", 1988));
	ret_put(printf("%.15d!\n", -2134));
	ret_put(printf("%.15d!\n", INT_MIN));
	ret_put(printf("%.15d!\n", INT_MAX));
	ret_put(printf("%.15d!\n", 0));
	ret_put(printf("%.0d!\n", 1988));
	ret_put(printf("%.d!\n", 1988));
	ret_put(printf("%.0d!\n", 0));
	ret_put(printf("%.d!\n", 0));

	ret_put(printf("%.15i!\n", 1988));
	ret_put(printf("%.15i!\n", -2134));
	ret_put(printf("%.15i!\n", INT_MIN));
	ret_put(printf("%.15i!\n", INT_MAX));
	ret_put(printf("%.15i!\n", 0));
	ret_put(printf("%.0i!\n", 1988));
	ret_put(printf("%.i!\n", 1988));

	ret_put(printf("%.15u!\n", 2147483649));
	ret_put(printf("%.15u!\n", UINT_MAX));
	ret_put(printf("%.15u!\n", 0));
	ret_put(printf("%.0u!\n", 2147483649));
	ret_put(printf("%.u!\n", 2147483649));

	ret_put(printf("%.15x!\n", 42));
	ret_put(printf("%.15x!\n", 123456));
	ret_put(printf("%.15x!\n", INT_MAX));
	ret_put(printf("%.15x!\n", UINT_MAX));
	ret_put(printf("%.15x!\n", 0));
	ret_put(printf("%.0x!\n", 42));
	ret_put(printf("%.x!\n", 42));

	ret_put(printf("%.15X!\n", 42));
	ret_put(printf("%.15X!\n", 123456));
	ret_put(printf("%.15X!\n", INT_MAX));
	ret_put(printf("%.15X!\n", UINT_MAX));
	ret_put(printf("%.15X!\n", 0));
	ret_put(printf("%.0X!\n", 42));
	ret_put(printf("%.X!\n", 42));
#endif
#ifdef ALL_ONE
	printf("********** Mix pattern ***********\n");
	ret_put(printf("%10.5c!\n", '@'));
	ret_put(printf("%-10.5c!\n", '@'));
	ret_put(printf("%010.5c!\n", '@'));
	ret_put(printf("%-010.5c!\n", '@'));

	ret_put(printf("%10.7d!\n", 12345));
	ret_put(printf("%-10.7d!\n", 12345));
	ret_put(printf("%010.7d!\n", 12345));
	ret_put(printf("%-010.7d!\n", 12345));

	ret_put(printf("%10.7i!\n", 12345));
	ret_put(printf("%-10.7i!\n", 12345));
	ret_put(printf("%010.7i!\n", 12345));
	ret_put(printf("%-010.7i!\n", 12345));

	ret_put(printf("%10.7u!\n", 12345));
	ret_put(printf("%-10.7u!\n", 12345));
	ret_put(printf("%010.7u!\n", 12345));
	ret_put(printf("%-010.7u!\n", 12345));

	ret_put(printf("%10.7x!\n", 12345));
	ret_put(printf("%-10.7x!\n", 12345));
	ret_put(printf("%010.7x!\n", 12345));
	ret_put(printf("%-010.7x!\n", 12345));

	ret_put(printf("%10.7X!\n", 12345));
	ret_put(printf("%-10.7X!\n", 12345));
	ret_put(printf("%010.7X!\n", 12345));
	ret_put(printf("%-010.7X!\n", 12345));
#endif
#endif
	return (0);
}
