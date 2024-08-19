## NOTES

### STEPS TO REPRODUCE
1 ) Basic window
* Setup the version number
* Setup the window and it's configurations
* Setup the draw loop

2 ) Triangle
* Vertices
* Vertex Buffer Object (VBO)
    * essentially just a specialized array to hold all of the data of the vertex including position and color
* Vertex Array Object (VAO)
    * points to each vertex in a VBO
    * this is what is used to render and maps vertex shader to data stored in VBO
* Element Buffer Object (EBO)
    * used for optimisation
    * determines how the order of the vertices being drawn
    * makes it so that you can resuse vertices rather than re-render them