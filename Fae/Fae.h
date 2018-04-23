#ifndef __FAE__h__
#define __FAE__h__

#include <vector>
#include <string>

#include <fstream> //ifstream
#include <sstream> //stringstream
#include <exception> //exception
#include <iostream> //For Debugging

#include "../Vector3D/Vector3D.h"
#include "../Juan/Juan.h"

typedef std::vector<Vector> Position;
typedef std::vector<Position> MovementScript;

enum class Tag : int {
  SACR=0 ,
  LASI=1 , LTHI=2 , LKNE=3 , LTIB=4  , LANK=5  , LTOE=6 ,
  RASI=7 , RTHI=8 , RKNE=9 , RTIB=10 , RANK=11 , RTOE=12
};

class FaeTheFair {
private:
  Vector sacr; //hip

  Vector lasi; //lower left hip
  Vector rasi; //lower right hip

  Vector lthi; //left thigh
  Vector rthi; //right thigh

  Vector lkne; //left knee
  Vector rkne; //right knee

  Vector ltib; //left tibia
  Vector rtib; //right tibia

  Vector lank; //left ankle
  Vector rank; //right ankle

  Vector ltoe; //left toe
  Vector rtoe; //right toe

  MovementScript script;
  int currentFrame;
  bool moving; //Para futuro control de pausa
               //y reanudación del movimiento

  float angle;
  float ratio;
  bool loop;

public:
  FaeTheFair( float ratio=1.0f );
  virtual ~FaeTheFair ();

  void setRatio( float ratio );

  void readScript( std::string filePath );
  void setScript( MovementScript script );
  void move( Position nextPos );
  void nextFrame();
  void drawUpperBody();
  void draw();
  bool isMoving();
  bool toggleMovement();
  void restart();
  bool hasEnded();
  bool checkPreScript( MovementScript preScript );
  MovementScript processPreScript( MovementScript preScript );
  Vector getPoint( Tag name );
  MovementScript fixPreScript( MovementScript preScript );

  // Debugging funks
  void checkFixedPreScript( MovementScript preScript );
  void printScript();
  std::string getPosFromIndex(int i);
  void toggleLoop();
};


#endif
