#include "main.h"



/**

*_strcpy - Copy paste string

*@dest: Destination

*@src: source code

*

* Return: destination

*/



char *_strcpy(char *dest, char *src)

{



	int i = 0;



		for (; src[i] != '\0'; i++)



			{



					dest[i] = src[i];



						}



							return (dest);



							}
