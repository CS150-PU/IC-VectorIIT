//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
// Hours:       
//******************************************************************************

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <iomanip>

// TODO #2: Write a function prototype called getRandom that has two
//          parameters first and second. If first <= second, return a random
//          integer in the range of first to second inclusive; otherwise,
//          return a random integer in the range of second to first inclusive.
//          As an example, a call to getRandom (5, 10); returns a random
//          integer between 5 and 10 inclusive.

// TODO #4: Write a function prototype called fillVector that fills a vector
//          with size randome values between first and second inclusive. As an
//          example, a call to fillVector (aVector, 10, 2, 100); will fill
//          aVector with 10 random values in the range of 2 and 100 inclusive.

// TODO $7: Write a function printVector that accepts an integer vector and 
//          outputs each element of the vector num values per line
//          in a field of fieldWidth spaces. As an example, a call to 
//          printVector (aVector, 3, 5); will print 3 values per line with
//          each value in the vector printed right justified in a field of 5.

using namespace std;

int main () {
  // TODO #1: Define a vector, aVector, capable of holding ints

  srand (0);  // sets the seed value to 0, do not change this

  // TODO #6: Fill the vector aVector with 13 random velues between
  //          5 and 1000 inclusive by calling the function fillVector.

  // TODO #9: Call printVector to output the contents of aVector using the
  //          call printVector (aVector, 3, 5);
  
  return EXIT_SUCCESS;
}

// TODO #3: Write the definition for getRandom as described in TODO #2

// TODO #5: Write the definition for fillVector as described in TODO #4. This
//          function is to call the function getRandom.

// TODO #8: Write the definition for printVector as described in TODO $7