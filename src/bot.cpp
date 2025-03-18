#include <cmath>
#include <vector>


//* Create a vector of direction offsets (8, -8, 1, -1, 7, -7, 9, -9)
//* Precompute the number of squares to the edge at any position, and store in an array

//* Create struct for Moves:
//* - Start square
//* - End square


//! Generate pseudo-legal moves for a given position
//? Sliding pieces (Bishop, Rook, Queen)
//* Take in the piece and the starting square of that piece
// Loop over 8 different directions, and loop over number of squares to the edge in that direction (Using prepared function from earlier)
// Use direction offsets to check this
// Skip further if there is a friendly piece in the way
// Skip further if there is an enemy piece in the way (After adding that piece)
// Add logic so that Bishop checks the last 4 offsets (Horizontal), and Rook checks first 4 (straight). Queen can use all 8. 

//? King

//? Pawns

//? Knight

//! Generate legal moves given pseudo-legal moves



