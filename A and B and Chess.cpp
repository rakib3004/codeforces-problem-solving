#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()

{
       int black=0,white=0;
      char a[8][8];

      int i,j;

      for(i=0;i<8;i++)

      {


              scanf("%s",a[i]);


      }
       for(i=0;i<8;i++)
       {

           for(j=0;j<8;j++)
           {
              if(a[i][j]=='.')
                 {
                  continue;

                 }

                    else if(a[i][j]== 'q')
                            {

                          black+=9;
                            }
               else if( a[i][j]== 'r')

               {
                   black+=5;
               }
    else if(a[i][j]== 'b')

    {
      black+=3;
    }
               else if( a[i][j]== 'n')

               {
            black+=3;
               }
    else if( a[i][j]== 'p')
    {

     black+= 1;
    }

                else if( a[i][j]=='Q')

                {
                white+=9;
                }else if( a[i][j]=='R')

                {
                white+=5;
                }
                else if( a[i][j]=='B')

                {
                   white+=3;
                }
              else if( a[i][j]=='N')

              {

                  white+=3;
              }

              else if( a[i][j]=='P')
              {

                   white+=1;
              }

                else

                {
                    continue;
                }

           }
       }

       if(white>black)
       {

           printf("White");
       }

            else if(white<black)
            {

                printf("Black");
            }

            else


            {
                printf("Draw");
            }
            return 0;

        }

