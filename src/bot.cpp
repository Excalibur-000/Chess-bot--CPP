#include <cmath>
#include <vector>


//* Create a vector of direction offsets. Precompute no of squares to edge
std::vector<int> dir_offset = {8, -8, 1, -1, 7, -7, 9, -9};
std::vector<int> knight_offsets = {17, -17, 6, -6};
std::vector<int> NumSquaresToEdge;

void ComputeEdgeSquares() {
  for (int file = 0; file < 8; file++) {
    for (int rank = 0; rank < 8; rank++) {

      int numNorth = 7 - rank;
      int numSouth = file;
      int numWest = rank;
      int numEast = 7 - file;

      // Incomplete
    }
  }
}; 

//* Create struct for Moves:
struct Moves {
  int Startpos;
  int Endpos;
};


//! Generate pseudo-legal moves for a given position
//* Each functions takes in the piece and the starting square of that piece

//? Sliding pieces (Bishop, Rook, Queen)
// Loop over 8 different directions, and loop over number of squares to the edge in that direction (Using prepared function from earlier)
// Use direction offsets to check this
// Skip further checks if there is a friendly piece in the way
// Skip further checks if there is an enemy piece in the way (After adding that piece)
// Add logic so that Bishop checks the last 4 offsets (Horizontal), and Rook checks first 4 (straight). Queen can use all 8. 

//? King
// Uses direction offsets to check all adjacent squares 
// Skip check if there is a friendly piece in the way
// Add checks if there is an enemy piece in the way
// Uses boolean state to determine if king can castle

//? Pawns
// Checks square directly in front to check if pawn is allowed to push (using directional offsets, checks if there is any piece)
// Checks offsets 7 and 9 (front diagonal) to see if there is an enemy piece for there (skips if friendly piece)
// Uses boolean logic to see if pawn is on first rank (checks 2 spots infront)
// Checks offsets 1 and -1 to check if there is an enemy piece. If there is, pass in en passant as a legal move

//? Knight
// Use custom made knight offsets vector to determine possible moves
// Checks if possible positions are off the board (< 1 or > 64), and exterminates impossible moves.
// Checks if there are friendly pieces in the way, and exterminates impossible moves.




//! Generate legal moves given pseudo-legal moves



