// -----------------------------------------------------------------------------
// libDDG -- Face.h
// -----------------------------------------------------------------------------
//
// Face stores attributes associated with a mesh edge.  The iterator he points
// to one of its associated halfedges.  (See the documentation for a more
// in-depth discussion of the halfedge data structure.)
// 

#ifndef DDG_FACE_H
#define DDG_FACE_H

#include "Types.h"

namespace DDG
{
   class Face
   {
      public:
         HalfEdgeIter he;
         // points to one of the halfedges associated with this face

         bool isBoundary( void ) const;
         // returns true if this face corresponds to a
         // boundary loop; false otherwise

         double area( void ) const;
         // returns the triangle area

         Vector normal( void ) const;
         // returns the unit normal associated with this face; normal
         // orientation is determined by the circulation order of halfedges

         int index;
         // unique integer ID in the range 0, ..., nFaces-1
   };
}

#endif
