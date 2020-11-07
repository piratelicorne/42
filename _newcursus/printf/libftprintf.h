#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include "libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

/*
It will manage the following conversions: cspdiuxX%
	%c print a single character
	%s print a string of characters
	%d print a decimal (base 10) number
	%i print an integer in base 10
	%u print an unsigned decimal (base 10) number %x print a number in hexidecimal (base 16)
	%x print a number in hexidecimal (base 16)
	%% print a percent sign (\% also works)

https://www.cypress.com/file/54441/download

It will manage any combination of the following flags: ’-0.*’ and minimum field width with all conversions
	- : Left-justify within the given field width; Right justification is the default
	0 : Left-pads the number with zeroes (0) instead of spaces when padding is specified
	. : The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.
	* : The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.
	.number : 

https://www.cplusplus.com/reference/cstdio/printf/
*/

typedef struct		s_fields
{
	int 	fNegative;
	int		fZero;
	int		width;
	int		wildcard;
	int		precision;
	char	spec;
	int		q;
}       			t_fields;

//funciones ayudantes
int		ft_putcharcounter(char c);

//funciones PRINTERS FLAGS
int		pft_spaces(int cant, char c);

//funciones PRINTERS SPEC
int		ptf_char(t_fields *attr, va_list args_list);
int		ptf_str(t_fields *fields, va_list args_list);
int		ft_putspecifier(t_fields *attr, va_list args_list);

//funciones que gestionan los campos flags, width, precision
void	ptf_initfields(t_fields *attr);
int		pft_setfields(t_fields *attr, const char *fmt, va_list args_list);
void	pft_setflags(t_fields *attr, const char fmt, va_list args_list);

//función MAESTRA
int		ft_printf(const char *format, ...);
int		pft_putfields(t_fields *attr, const char *fmt, va_list args_list);

#endif