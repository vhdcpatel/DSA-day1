#include <fstream>
#include <iostream>
using namespace std;

int main() {
  // Create and open a text file(fstream or ofstream)
  fstream MyFile("test.txt");

  // write in the file
  MyFile << "Hello world!";

  // close the file
  MyFile.close();


  // Create a text string, which is used to output the text file
  string myText;

// Read from the text file
ifstream MyReadFile("test.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
  MyReadFile.close();
  return 0;
}