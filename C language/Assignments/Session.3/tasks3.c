// Q.3 Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.

#include <stdio.h>

int main()
{

    char playlistName[] = "Tops 45 Hits";
    int totalSongs = 45;
    float avgDuration = 3.5;

    printf("My favorite playlist is '%s', which has %d songs with an average duration of %.1f minutes.\n",
           playlistName, totalSongs, avgDuration);

    return 0;
}