#include <unistd.h>
/**
 * main- takes no parameters
 * _putchar - writes the character c to stdout
 * Return: returns 0 
 */

int main(void)
{
  char message[] = "_putchar\n";
 
  write(1, message, sizeof(message) - 1);
  return (0);
}
