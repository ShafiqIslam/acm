#include <iostream>

using namespace std;

int main()
{
    const int n = 1499;
    int a [ 1500 ];
    int p2(0), p3(0), p5(0), end(0);
    a [ 0 ] = 1;

    while ( end < n )
    {
        while ( a [ p2 ] * 2 <= a [ end ] )  ++ p2;
        while ( a [ p3 ] * 3 <= a [ end ] )  ++ p3;
        while ( a [ p5 ] * 5 <= a [ end ] )  ++ p5;

        if ( a [ p2 ] * 2 < a [ p3 ] * 3 && a [ p2 ] * 2 < a [ p5 ] * 5 )
            a [ ++ end ] = a [ p2 ++ ] * 2;
        else if ( a [ p3 ] * 3 < a [ p5 ] * 5 )
            a [ ++ end ] = a [ p3 ++ ] * 3;
        else
            a [ ++ end ] = a [ p5 ++ ] * 5;
    }
    cout << "The 1500'th ugly number is " << a [ end ] << ".\n";
    return 0;
}


// algorithm...


/*Two = Three = Five = 1 [First ugly number]
 
long Minimum () {
    if ( (2 * Two) minimum than (3 * Three) and (5 * Five) ) then
        return (2 * Two) and update : Two = Next ugly number
 
    else if ( (3 * Three) minimum than (2 * Two) and (5 * Five) ) then
        return (3 * Three) and update : Three = Next ugly number
 
    else if ( (5 * Five) minimum than (3 * Three) and (2 * Two) ) then
        return (5 * Five) and update : Five = Next ugly number
}*/