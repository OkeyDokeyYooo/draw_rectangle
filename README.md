# draw_rectangle

After we draw the circle, we are able to draw rectangle. <br>
How to approach this? Think about this question. I will show you how to solve this problem.

## Requirements

1. You should contain the function draw_rectangle() and agree exactly
with this function declaration:
```C
void draw_rectangle( uint8_t array[], unsigned int cols,
                     unsigned int rows, int x,
                      int y,
                      int rect_width, int rect_height, uint8_t color );
```
2. The rectangle edges are aligned with the x,y axes.
3. The coordinates of a pixel are defined in the same way as they are in
Task 1 (see diagram in Task 1).
4. A corner of the rectangle is at the pixel at coordinate (x,y), and the
rectangle is rect_width pixels wide by rect_height pixels tall.

## Example

input:
```C
draw_rectangle( img, w, h, w/2, h/2, -5, -5, 128 );
draw_rectangle( img, w, h, w/2, h/2, 5, 5, 255 );
```

output:
![](https://github.com/OkeyDokeyYooo/draw_rectangle/blob/master/1.png)
