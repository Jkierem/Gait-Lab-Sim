#ifndef __JUAN__H__
#define __JUAN__H__

#include <GL/glut.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <vector>

#include "Vector3D.h"

namespace Juan {

  //mascaras
  void translate( Vector t );

  void scale( Vector s );

  void rotate( float angle , Vector v ); //rotate around vector
  void rotate( Vector rot ); //rotation on each axis
  void rotateX( float angle );//rotation around X
  void rotateY( float angle );//rotation around Y
  void rotateZ( float angle );//rotation around Z

  void setCamera( Vector eye , Vector center , Vector up );

  //Figures
  void drawLine( Vector start , Vector end );
  void drawSolidSphere( float radius , Vector center );
  void drawSolidCylinder( float radius , Vector start , Vector end , bool closed=true);
  void drawSolidCylinder( float srad , float erad , Vector start , Vector end , bool closed=true);
  void drawSolidCone( float radius , Vector start , Vector end , bool closed=true );
  void drawSolidIcosahedron( Vector scale , Vector translation , Vector rotation);

  void drawSegment( Vector start , Vector end , bool inclusive=false );
  void drawStage();

} /* Juan */


#endif