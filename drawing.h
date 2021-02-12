/*******************************************
 *              "drawing.h"                *
 *  drawing.h is  my custom header file    *
 *******************************************
 *       Author:-Prashant Bhandari         *
 *******************************************/
#ifndef DRAWING_H
#define DRAWING_H
/**
 * Colors which you can use in your application.
 */
typedef enum
{
    BLACK,          /**< black color */
    BLUE,           /**< blue color */
    GREEN,          /**< green color */
    CYAN,           /**< cyan color */
    RED,            /**< red color */
    MAGENTA,        /**< magenta color */
    BROWN,          /**< brown color */
    LIGHTGRAY,      /**< light gray color */
    DARKGRAY,       /**< dark gray color */
    LIGHTBLUE,      /**< light blue color */
    LIGHTGREEN,     /**< light green color */
    LIGHTCYAN,      /**< light cyan color */
    LIGHTRED,       /**< light red color */
    LIGHTMAGENTA,   /**< light magenta color */
    YELLOW,         /**< yellow color */
    WHITE           /**< white color */
} COLORS;

static int __BACKGROUND = BLACK;
static int __FOREGROUND = LIGHTGRAY;

//function to clear console screen.
void clrscr();
//function to change text colour.
void textcolor (int color);
//This function places cursor at a desired location on screen i.e., we can change cursor position using gotoxy function.
/*
                      5
                      |   [119]Columns
              *-------|-----------------------> (X-axis)     Example:-
              | *-----|-------------------*                          gotoxy(5,5);
              | |     |                   |                          printf("hello");
          5 --|-|-----*hello              |
         [29] | |     (5,5)               |                  Syntax:-
         Rows | |                         |                          gotoxy(x,y);
              | |     [output screen]     |
              | |                         |                  where,
              | |                         |                        x=x-coordinate
              | |                         |                        y=y-coordinate
              | |                         |
              | *-------------------------*
              |
              V 
    
          (Y-axis)
*/
void gotoxy(short x, short y);
//This function is used to print single line vertically.
/*
                     5(x)
                      |   [119]Columns
              *-------|-----------------------> (X-axis)     Example:-
              | *-----|-------------------*                          verline_single(5,5,10);
              | |     v                   |                        
      5(y1) --|-|---->│                   |
         [29] | |     │                   |                  Syntax:-
         Rows | |     │                   |                          verline_single(x,y1,y2);
              | |     │                   |
     10(y2) --|-|---->│                   |                  where,
              | |                         |                        x=x-coordinate
              | |                         |                        y1=Initial y-coordinate
              | |                         |                        y2=Final y-coordinate
              | *-------------------------*
              |
              V 
    
          (Y-axis)
*/
void verline_single(int x,int y1,int y2);
//This function is used to print single line horizontally .
/*
                        [119]Columns 
 
                      5(x1)      10(x2)
                      |           |
              *-------|-----------|-----------> (X-axis)     Example:-
              | *-----|-----------|-------*                          horline_single(5,5,10);
              | |     v           v       |                        
       5(y) --|-|----> ───────────        |
         [29] | |                         |                  Syntax:-
         Rows | |                         |                          horline_single(y,x1,x2);
              | |     [output screen]     |
              | |                         |                  where,
              | |                         |                        y=y-coordinate
              | |                         |                        x1=Initial x-coordinate
              | |                         |                        x2=Final x-coordinate
              | *-------------------------*
              |
              V 
    
          (Y-axis)
*/
void horline_single(int y,int x1,int x2);
//This function is used to print double line vertically.
/*
                     5(x)
                      |   [119]Columns
              *-------|-----------------------> (X-axis)     Example:-
              | *-----|-------------------*                          verline_double(5,5,10);
              | |     v                   |                        
      5(y1) --|-|---->║                   |
         [29] | |     ║                   |                  Syntax:-
         Rows | |     ║                   |                          verline_double(x,y1,y2);
              | |     ║                   |
     10(y2) --|-|---->║                   |                  where,
              | |                         |                        x=x-coordinate
              | |                         |                        y1=Initial y-coordinate
              | |                         |                        y2=Final y-coordinate
              | *-------------------------*
              |
              V 
    
          (Y-axis)
*/
void verline_double(int x,int y1,int y2);
//This function is used to print double line horizontally .
/*
                        [119]Columns 
 
                      5(x1)      10(x2)
                      |           |
              *-------|-----------|-----------> (X-axis)     Example:-
              | *-----|-----------|-------*                          horline_double(5,5,10);
              | |     v           v       |                        
       5(y) --|-|----> ═══════════        |
         [29] | |                         |                  Syntax:-
         Rows | |                         |                          horline_double(y,x1,x2);
              | |     [output screen]     |
              | |                         |                  where,
              | |                         |                        y=y-coordinate
              | |                         |                        x1=Initial x-coordinate
              | |                         |                        x2=Final x-coordinate
              | *-------------------------*
              |
              V 
    
          (Y-axis)
*/
void horline_double(int y,int x1,int x2);
//This function is used to print single line box in output screen.
/*
                   [119]Columns
                       x(5)  
                        |   
              *---------|---------------------> (X-axis)       Example:-    
              | *-------|-----------------*                             box_single_line(5,5,5,5);
              | |       | l(5)            |
              | |       |<----->          |
       y(5)---|-|-------┌──────┐          |                    Syntax:- 
              | |     ^ │      │          |                             box_single_line(x,y,l,w);
              | |     | │ box  │          |          
              | | w(5)| │      │          |
    [29]      | |     | │      │          |                    where,
    Rows      | |     V └──────┘          |                          x=x-coordinate
              | |    [output screen]      |                          y=y-coordinate
              | |                         |                          l=length
              | *-------------------------*                          w=width
              |
              V
           (Y-axis)
*/
void box_single_line(int x,int y,int l,int w);
//This function is same as above function but used to print double line box in output screen.
/*
                        [119]Columns
						    
              *-------------------------------> (X-axis)       Example:-    
              | *-------------------------*                             box_double_line(5,5,5,5);
              | |                         |
              | |                         |
              | |       ╔══════╗          |                    Syntax:- 
              | |       ║      ║          |                            box_double_line(x,y,l,w);
              | |       ║ box  ║          |
              | |       ║      ║          |                    where,
    [29]      | |       ║      ║          |                         x=x-coordinate
    Rows      | |       ╚══════╝          |                         y=y-coordinate
              | |     [output screen]     |                         l=length
              | |                         |                         w=width
              | *-------------------------*
              |
              V
           (Y-axis)
*/
void box_double_line(int x,int y,int l,int w);

#endif