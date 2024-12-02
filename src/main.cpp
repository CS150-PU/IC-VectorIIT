//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        xx/xx/xxxx (Replace xx/xx/xxxx with month/day/year)
// Class:       CS150-xx (Replace xx with your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

// TODO #2: Write a function prototype called getRandom that has two
//          parameters first and second. if first <= second, return a random
//          integer in the range of first to second inclusive; otherwise,
//          return a random integer in the range of second to first inclusive.
//          As an example, a call to getRandom (5, 10); returns a random
//          integer between 5 and 10 inclusive.

// TODO #4: Write a function prototype called fillVector that fills a vector
//          with size randome values between first and second inclusive. As an
//          example, a call to fillVector (aVector, 10, 2, 100); will fill
//          aVector with 10 random values in the range of 2 and 100 inclusive.

// TODO $7: Write a function printVector that accepts an integer vector and 
//          outputs each element of the vector one value per line. As an
//          example, a call to printVector (aVector); will print each
//          value in the vector one per line.

using namespace std;

int main () {
  // TODO #1: Define a vector, aVector, capable of holding ints

  srand (0);  // sets the seed value to 0, do not change this

  // TODO #6: Fill the vector aVector with 10 random velues between
  //          5 and 1000 inclusive by calling the function fillVector.

  // TODO #9: Call printVector to output the contents of aVector
  
  return EXIT_SUCCESS;
}

// TODO #3: Write the definition for getRandom as described in TODO #1

// TODO #5: Write the definition for fillVector as described in TODO #4

// TODO #8: Write the definition for printVector as described in TODO $7