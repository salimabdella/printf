#ifndef PRINT_F
#define PRINT_F

int _printf(const char *format, ...);
/**
 * print - creating a struct to store the specifier
 * and the neccessary function
 * specifier: the specifier passed
 * @f: calls the neccessary function needed
 */
typedef struct print
{
	char *specifier;
	int (*f)(va_list);
}print_t;

#endif
