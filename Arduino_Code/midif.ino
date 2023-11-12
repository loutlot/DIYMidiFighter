#include <Control_Surface.h> // Include the Control Surface library
 
// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;
 
// Instantiate a NoteButton object
NoteButton buttons[] {
  {1, {36, Channel_1}},
  {0, {37, Channel_1}},
  {2, {38, Channel_1}},
  {3, {39, Channel_1}},
  {4, {40, Channel_1}},
  {5, {41, Channel_1}},
  {6, {42, Channel_1}},
  {7, {43, Channel_1}},
  {8, {44, Channel_1}},
  {9, {45, Channel_1}},
  {10, {46, Channel_1}},
  {16, {47, Channel_1}},
  {14, {48, Channel_1}},
  {15, {49, Channel_1}},
  {18, {50, Channel_1}},
  {19, {51, Channel_1}},
};

 
void setup() {
  Control_Surface.begin(); // Initialize Control Surface
}
 
void loop() {
  Control_Surface.loop(); // Update the Control Surface
}