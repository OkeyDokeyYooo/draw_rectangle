#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void draw_rectangle( uint8_t array[],
		          unsigned int cols,
		          unsigned int rows,
		          int x,
		          int y,
		          int rect_width,
		          int rect_height,
		          uint8_t color )
{
  int start_x, start_y, end_x, end_y;


  if((rect_width > 0) && (rect_height > 0))
  {
    start_x = x;
    end_x = x + rect_width - 1;
    start_y = y;
    end_y = y + rect_height - 1 ;
  }
  else if ((rect_width < 0) && (rect_height < 0))
  {
    start_x = x + rect_width + 1;
    end_x = x ;
    start_y = y + rect_height + 1;
    end_y = y ;
  }
   else if ((rect_width > 0) && (rect_height < 0))
   {
     start_x = x;
     end_x = x + rect_width - 1;
     start_y = y + rect_height + 1;
     end_y = y ;
   }
   else
   {
     start_x = x + rect_width + 1;
     end_x = x ;
     start_y = y;
     end_y = y + rect_height - 1;
   }
  //  if (start_x < 0) start_x = 0;
  //  if (start_y < 0) start_y = 0;
  //  if (start_x > cols) start_x = cols;
  //  if (start_y > rows) start_y = rows;
	 //
  //  if (end_x < 0) end_x = 0;
  //  if (end_x > cols) end_x = cols;
  //  if (end_y < 0) end_y = 0;
  //  if (end_y > rows) end_y = rows;


  //  int h = y + rect_height;
  //  if( h < 0) h = 0;
  //  if (h > rows) h = rows;
  //  int w = x + rect_width;
  //  if ( w < 0) w = 0;
  //  if ( h < cols)

   for (int i = start_x; i <= end_x ; i++)
   {
		 if ((i >= 0)&&(i < cols))
		 {
			 if ((y >= 0)&&(y < rows))
			 {
				 array[i + y*cols] = color;
			 }

			 if (((y+ rect_height) >= 0)&&((y+rect_height) < rows))
			 {
				 if(rect_height > 0)
				 {
					 array[i + (y+rect_height - 1 )*cols] = color;

				 }
				 else
				 {
					 array[i + (y+rect_height + 1 )*cols] = color;

				 }

			 }
	    //  if (rect_height > 0)
	    //  {
	    //    array[i + (h-1)* cols] = color;
	    //  }
	    //  else
	    //  {
	    //    array[i + (h + 1)* cols] = color;
	    //  }
		 }
   }
   for (int j = start_y; j <= end_y; j++)
   {
		 if((j >= 0) && (j < rows))
		 {
			 if ((x >= 0)&&(x < cols))
			 {
				  array[x + j*cols] = color;
			 }

			 if (((x + rect_width) >= 0) && ((x + rect_width) < cols))
			 {
				 if(rect_width > 0)
				 {
					 array[(x+rect_width - 1)+ j*cols] = color;

				 }
				 else
				 {
					 array[(x+rect_width + 1)+ j*cols] = color;

				 }

			 }
	    //  if(rect_width > 0)
	    //  {
	    //    array[(x+ rect_width -1 ) + j*cols] = color;
	    //  }
	    //  else
	    //  {
	    //    array[(x+ rect_width + 1) + j*cols] = color;
	    //  }
		 }
   }
}
