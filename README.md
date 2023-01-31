# Welcome to 42 Cub3D!

This is a 3D graphics rendering engine written in C, using the ray-casting technique to create a 3D-like environment from a 2D map.

To run the program, make sure you have the necessary libraries installed and use the command "make" to compile the program. Then, use the command "./cub3d [map_file]" to run the program with the specified map file.

The map file should be a text file with the following format:

- The first line should be the resolution of the window in the format "R [width] [height]"
- The second line should be the path to the texture file for the North wall
- The third line should be the path to the texture file for the South wall
- The fourth line should be the path to the texture file for the West wall
- The fifth line should be the path to the texture file for the East wall
- The remaining lines should be the layout of the map, using the following characters:
  - '0' for empty space
  - '1' for walls
  - '2' for the starting position of the player

The map should be surrounded by walls
You can move around the map using the arrow keys, and exit the program by pressing the 'esc' key.

Please note that the program will not work correctly if the textures are not in the correct format or the map is not set up correctly.

Enjoy exploring the 3D world of 42 Cub3D!
