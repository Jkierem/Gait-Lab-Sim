# Gait Lab Simulator
- For compilation, use the compile file included in the repo

## To Do's:
- [X] Implement Vector3D
- [X] Implement masking Functions in Juan Namespace
- [X] Implement basic FaeTheFair
- [X] Draw Cylinder given two points in space
- [X] Draw Cone given two points in space
- [X] Draw basic stage
- [X] Draw body
- [X] Get Point from Fae given Tag
- [X] Rework Folder Structure
- [X] Read Positions from input file
- [X] Fix (0,0,0) Positions in input file
- [X] Implement rotating octahedron
- [X] Adjust perspective to be able to fit entire figure
- [X] Adjust Camera to show figure correctly
- [X] Implement User interaction
- [X] Remove global variables from main.cpp
- [X] Add configurations
- [X] Fix Cylinder function.
- [X] Adjust Body and Legs scale
- [X] Draw Stage (properly)
- [X] Draw Body (properly)
- [ ] ~~Implement right click menu.~~
- [ ] ~~Implement union with OpenCSG to use in segments~~
- [ ] ~~Gain sentience and build using 3D printer~~

## User Interaction:

   As of now the control of the program is limited to:
-  **Space Bar**: start, stop and resume the sim. The default state is stop.
-  **R Key**: restart sim.
-  **L Key**: load a sim file using zenity*.
-  **W,S Keys**: rotation on X axis.
-  **A,D Keys**: rotation on Y axis.
-  **Q,E Keys**: rotation on Z axis.
-  **Arrow keys**: panning on XY plane.
-  **- Key**: panning to positive Z plane.
-  **. Key**: panning to negative Z plane.
-  **T Key**: reset rotation to default rotation.
-  **Y Key**: reset panning to default panning.
-  **O key**: save current rotation as default rotation.
-  **P Key**: save current panning as default panning.
-  **K Key**: toggle simulation loop. The default is false.
-  **F Key**: cycle frame rates. They are 15, 30 and 60 fps. The default is 30 fps.
-  **ESC Key**: exit program.

*Requires zenity and unix based os or else the program will crash. Files without the proper structure will also cause a crash.
