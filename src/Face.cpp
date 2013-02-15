#include "Face.h"
#include "Mesh.h"
#include "Vector.h"

namespace DDG
{
   double Face::area( void ) const
   {
      Vector p0 = he->vertex->position;
      Vector p1 = he->next->vertex->position;
      Vector p2 = he->next->next->vertex->position;

      return cross( p1-p0, p2-p0 ).norm() / 2.;
   }

   Vector Face::normal( void ) const
   {
      Vector p0 = he->vertex->position;
      Vector p1 = he->next->vertex->position;
      Vector p2 = he->next->next->vertex->position;

      return cross( p1-p0, p2-p0 ).unit();
   }

   bool Face::isBoundary( void ) const
   {
      return he->onBoundary;
   }
}

