#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  // Add a constructor here:
  Song(std::string new_title, std::string new_artist);
  
  //member functions
  std::string get_title();
  std::string get_artist();
  
};