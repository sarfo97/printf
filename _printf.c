#include "main.h"

int print_str(char *str)
{
  int count = 0;
  while (*str != '\0')
  {
      write(1, str, 1);
      str++;
      count++;
  }

 int _printf(const char *format, ...)
{
 int count = 0

 va_list args;

 if(format == NULL){
    return(-1)
 }
 
 va_start(args_list, format);

 while (*format != '\0')
  {
    if (*format == '%')
    {
      format++; // Move to the next character after '%'
      if (*format == 'c') {
        char s = va_arg(args, int);
        count += write(1, &s, 1);
      }
      else if (*format == 's') {
        char *str = va_arg(args, char*);
        count += print_str(str);
      }
      else if (*format == 'd' || *format == 'i')
      {
        int num = va_arg(args, int);
        count += print_int(num);
      }
      else {
        print_str("unIdentified formatter\n");
        return (-1);
      }
    }
    else {
      write(1, format, 1);
      count++;
    }
    format++;
  }

  va_end(args);
  return (count);
}



int main(void)
{
  printf("This is trial\n");
  printf("This is number %d\n", 12);
  printf("This is a name %s\n", "ALX");
  printf("This is a character %c\n", 97);
  printf("%%");

  printf("This is the result of custom printf\n");
  _printf("This is trial\n");
  _printf("This is number %d\n", 12);
  _printf("This is a name %s\n", "ALX");
  _printf("This is a character %c\n", 97);

  return (0);
}
