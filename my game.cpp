#include <iostream>
using namespace std ;
typedef short hos ;
int main ()
{
	
	 hos gg = 0 ;
    
    hos jj [5] ;
    
    
    hos hh [5] [5]
    = 
    {
    { 1 , 5 , 10 , 16 , 23 } ,
    { 2 , 4 , 8  , 16 , 32 } ,
    { 1 , 1 , 2  , 3  , 5  } ,
    { -5 , 25 , -125 , 625 } ,
    { 6 , 5 , 4 , 6 , 5 } 
    }
    ;
    cout << 
    " \n  ahzr alahrf \n"
    ;
    
    cout << 
    "     Q 1  \n"
    ;
    
    cout << 
    "   1 , 5 , 10 , 16 , ??  \n "
    ;
    
    cout << 
    " {    "
    ;
    
    cin >> 
    jj [0]
    ; 
    
    cout << 
    "     } \n "
    ;
    
    if ( jj [0] == hh [0] [4])
    {
     gg++;
     cout << 
    "       true  your point is " <<
    gg <<
    "   \n"
    ;
    }
    else 
    {
     cout << 
     "     i am soree \n" <<
     "     the true us { 23 } \n " 
     ;
    }
    
    
    //==================
    
    cout << 
    "     Q2 \n"
    ;
    
    cout << 
    "  2 , 4 , 8  , 16 , ??  \n "
    ;
    
    cout << 
    " {    "
    ;
    
    cin >> 
    jj [1]
    ; 
    
    cout << 
    "     } \n "
    ;
    
    if ( jj[1] == hh [1] [4])
    { 
    gg++ ;
    cout << 
    "      true  your point is " <<
    gg <<
    "   \n"
    ;
    }
    else 
    {
     cout << 
     "     i am soree  \n" <<
      "     the true us { 32 } \n " 
     ;
    }
    
    // ========================
    
    cout << 
    "     Q3 \n"
    ;
    
    cout << 
    "  1 , 1 , 2  , 3  , ??  \n "
    ;
    
    cout << 
    " {    "
    ;
    
    cin >> 
    jj [2]
    ; 
    
    cout << 
    "     } \n "
    ;
    
    if ( jj[2] == hh [2] [4])
    { 
    gg++ ;
    cout << 
    "    true  your point is " <<
    gg <<
    "   \n"
    ;
    }
    else 
    {
     cout << 
     "    i am soree  \n" <<
      "     the true us { 5 } \n " 
     ;
    } 
    
   
  
      // ===============================
    
       cout << 
    "     Q 4 \n"
    ;
    
    cout << 
    "  -5 , 25 , -125 , ??  \n "
    ;
    
    cout << 
    " {    "
    ;
    
    cin >> 
    jj [3]
    ; 
    
    cout << 
    "     } \n "
    ;
    
    if ( jj [3] == hh [3] [3])
    {
     gg++;
     cout << 
    "       true  your point is " <<
    gg <<
    "   \n"
    ;
    }
    else 
    {
     cout << 
     "     i am soree \n" <<
     "     the true us { 625 } \n " 
     ;
    }
    
      // ===============================
    
       cout << 
    "     Q 5 \n"
    ;
    
    cout << 
    " 6 , 5 , 4 , 6 , ??  \n "
    ;
    
    cout << 
    " {    "
    ;
    
    cin >> 
    jj [4]
    ; 
    
    cout << 
    "     } \n "
    ;
    
    if ( jj [4] == hh [4] [4])
    {
     gg++;
     cout << 
    "       true  your point is " <<
    gg <<
    "   \n"
    ;
    }
    else 
    {
     cout << 
     "     i am soree \n" <<
     "     the true us { 5 } \n " 
     ;
    }
    
     cout                       <<
     "\nYour final score is: " <<
      gg                      << 
                         " / 5\n"
         ;
    
    }