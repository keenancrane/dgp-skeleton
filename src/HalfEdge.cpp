#include "HalfEdge.h"
#include "Mesh.h"

namespace DDG
{
   double HalfEdge :: cotan( void ) const
   {
      Vector p0 = next->next->vertex->position;
      Vector p1 = vertex->position;
      Vector p2 = next->vertex->position;

      Vector u = p1-p0;
      Vector v = p2-p0;

      return dot( u, v ) / cross( u, v ).norm();
   }
}

