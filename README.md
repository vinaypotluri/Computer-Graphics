Computer-Graphics
=================

Title: Add life to you Imagination     
Language:  C++      
Environment: Microsoft Visual Studio

[OpenGl](http://oglplus.org/)

The project on Computer Graphics involved a remarkable animation using C++ on Visual Studio with the help of Opensource's OpenGL APIs. The animation consists of 2 animated characters representing humans and their interactions.
User controls has been added to make the interaction much more interesting which adds life to one's imagination.




The project has been developed in Visual C++ using OpenGL, which has become a widely accepted standard for developing graphics application. Fortunately, OpenGL is easy to learn, and it possesses most of the characteristics of other popular graphics systems.

For Understanding
==================
Most of the applications are designed to access OpenGL directly through functions in three libraries.

1. GL - Names that begin with letters gl are stored in library usually referred to as GL (or OpenGL in windows).

2. GLU  - OpenGL Utility Library (GLU). This library uses only GL functions but contains code for creating common objects             and simplifying viewing.

3. GLUT - OpenGL Utility Toolkit (GLUT) This toolkit provides the minimum functionality that should be expected in any modern windowing system.


OpenGL supports two classes of primitives: geometric primitives and raster primitives. Geometric primitives are specified in the problem domain and include points, line segments, curves, polygons, and surfaces. These primitives pass through a geometric pipeline, where they are subjected to series of geometric operations, which determine whether a primitive is visible, where on the display it appears if it is visible, and the rasterization of the primitive into pixels in the frame buffer.


The basic OpenGL geometrics primitives are specified by sets of vertices.

Thus, the programmer defines her objects with sequence of the following form:


glBegin(type);

 glVertex*(.....);

 .

 .

 .


 glVertex*(....);

glEnd( );



The value of type specifies how OpenGL assembles the vertices to define geometric objects. The other code and OpenGL function calls can occur between glBegin and glEnd. If we wish to display points or line segments, we have a few choices in OpenGL.

Points (GL_POINTS): Each vertex is displayed at a size of at least one pixel.

Line segments (GL_LINES): The line segment type causes successive pairs of vertices to be interpreted as the endpoints of individual segments.

Polylines (GL_LINE_STRIP, GL_LINE_LOOP): If successive vertices are to be connected, we can use the line strip or polyline form. The GL_LINE_LOOP type, which will draw a line segment from the final vertex to the first, thus, creates a closed path.

Polygons (GL_POLYGON): Successive vertices define line segments, and a line segment connects the final vertex to the first.


Before we can open a window, there must be interaction between the windowing system and OpenGL. In GLUT, this interaction is initiated by following function call:

glutInit(int *argv,char ** argv)
The two arguments allow user to pass command line arguments, as in the standard C main function, and are usually the same as in main. We can now open an OpenGL window using the glut function.


glutCreateWindow (char *title)

Where title at the top of the window is given by the string title. The window that we create has a default size, position on the screen, and characters such as the use of RGB color.


We can also use GLUT functions before window creation to specify these parameters.
For example, here we can specify 

glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize (780,520); 
glutInitWindowPosition (0.0,0.0);



The documentation for OpenGl can be found here  [https://www.opengl.org/documentation/](https://www.opengl.org/documentation/)

