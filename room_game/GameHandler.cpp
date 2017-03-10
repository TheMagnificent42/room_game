//manages user input, saving, current player position, and passing to rooms' contents
#include <string>
#include <fstream>

using namespace std;

class GameHandler
{
  private:
    string saveFile;
    
  public:
    GameHandler(string);
};

GameHandler::GameHandler(string loadFile)
{
  saveFile = loadFile;
}
