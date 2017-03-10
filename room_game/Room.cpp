//class for the rooms
#include <fstream>

using namespace std;

class Room
{
  private:
    fstream saveFile;
    ObjectInteractable contents[];
  
  public:
    Room(string);
};

Room::Room(string loadFile)
{
  saveFile = load(loadFile);
  
  
}
