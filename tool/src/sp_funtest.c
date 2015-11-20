/*----------------------------------------------
    modification time: 2015.11.19 21:45
    mender: Muse
------------------------------------------------*/
/*----------------------------------------------
    file: sp_funtest.c
    author: Muse
    creation time: 2015.11.19 21:45
------------------------------------------------*/

/*----------------------------------------------
           Source file contain Five part

           Part Zero:  Include
           Part One:   Define
           Part Two:   Local data
           Part Three: Local function

           Part Four:  Test
            
------------------------------------------------*/

/*----------------------------------------------
               Part Zero: Include
------------------------------------------------*/

#include "sp.h"


/*----------------------------------------------
                Part One: Define
------------------------------------------------*/


/*----------------------------------------------
              Part Two: Local data
------------------------------------------------*/

char    textContent[0x100] = {
            "<html>\n<div class=\"fuck\" id=\"shit\">\n \
             \r<a>shit man</a>\n \
             \r<div class=\"haha\"> <br> </br> </div>\n \
             \r<div id=\"ohoh\" class=\"yuy\"> </div>\n \
             \r</div>\n</html>\n"
        };


/*----------------------------------------------
           Part Three: Local function
------------------------------------------------*/

/* Part Four */
static  int     para_analysis(int argc, char **argv);
static  void    test_part(void);


/*----------------------------------------------
                Part Four: Test

                1. main
                2. para_analysis
                3. test_part

------------------------------------------------*/

/*-----main-----*/
int main(int argc, char **argv)
{
   para_analysis(argc, argv);
   test_part();

   return   -1;
}


/*-----para_analysis-----*/
static int para_analysis(int argc, char **argv)
{
    return  1;
}


/*-----test_part-----*/
static void test_part(void)
{
    char   *tag_string = &textContent[7];
    int     content_size = strlen(textContent) - 7;

    if (!(tag_string = sp_html_tag_range_locate(tag_string, content_size)))
        perror("sp_html_get_tag_string");
    
    printf("%.*s\n", content_size, tag_string);
}
