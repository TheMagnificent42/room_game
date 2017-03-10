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

Room::Room(string fileIn)
{
  saveFile = load(string fileIn);
  
}
