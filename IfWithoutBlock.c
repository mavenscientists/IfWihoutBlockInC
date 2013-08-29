  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * IfStatementWithoutBlock - This program shows the use of if statement 
   * without the if block
   */

#include <stdio.h>

int main()
{
	if(1) // always true condition. Try with 0 - always false condition 
		printf("Hello 1"); /* no block defiened; the statement after the if statement
							is executed if the condition is true. Only one statement 
							in this case will constitute the if block.
							NOT RECOMMENDED PRACTICE - however the is correct C Code
						*/
	printf("Hello 2");
	
	return 0;
}
