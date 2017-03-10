//manages user input, saving, current player position, and passing to rooms' contents
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class GameHandler
{
  private:
    fstream saveFile;
  
    string currentRoom;
  
    int roomCount;
    vector<Room> loadedRooms;
    
  public:
    GameHandler(string);
    bool save();
};

GameHandler::GameHandler(string fileIn)
{
  saveFile = loadFile;
  
}

GameHandler::save()
{
  
}
