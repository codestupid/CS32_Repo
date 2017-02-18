//
//  maze.cpp
//  maze
//
//  Created by Runjia Li on 2/11/17.
//  Copyright © 2017 Runjia Li. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

bool pathExists(string maze[], int nRows, int nCols, int sr, int sc, int er, int ec)
{
    const char ROAD = '.';
    const char MARKED = 'a';
    
    if (sr == er && sc == ec)
        return true;
    
    maze[sr][sc] = MARKED;
    
    if (maze[sr - 1][sc] == ROAD && pathExists(maze, nRows, nCols, sr - 1, sc, er, ec))
    {
        return true;
    }
    
    if (maze[sr][sc + 1] == ROAD && pathExists(maze, nRows, nCols, sr, sc + 1, er, ec))
    {
        return true;
    }
    
    if (maze[sr + 1][sc] == ROAD && pathExists(maze, nRows, nCols, sr + 1, sc, er, ec))
    {
        return true;
    }
    
    if (maze[sr][sc - 1] == ROAD && pathExists(maze, nRows, nCols, sr, sc - 1, er, ec))
    {
        return true;
    }
    
    return false;
}

