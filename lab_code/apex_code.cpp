//
//
#include <iostream>
#include "apex_code.h"

using namespace std;

int getNumberTiles(double heightInFt, double widthInFt, int tileSizeInIn)
{
    //Convert input dimensions into inches
    double heightInIn = heightInFt * 12.0;
    double widthInIn = widthInFt * 12.0;

    //Calculate number of tiles needed along height
    int tilesAlongHeight = static_cast<int>((heightInIn / tileSizeInIn) + 0.9999);

    //Calculate number of tiles needed along width
    int tilesAlongWidth = static_cast<int>((widthInIn / tileSizeInIn) + 0.9999);

    //Calculate total number of tiles needed
    int numTilesNeeded = tilesAlongHeight * tilesAlongWidth;

    return numTilesNeeded;
}

bool upperCharAnd (char char1, char char2)
{
    //return true only if both characters are uppercase letters
    return (isupper(char1) && isupper(char2));
}
