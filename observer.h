#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Cell; // class 

class Observer { // is an abstract class
 public:
  // virtual void notify(Cell &c) = 0; Not sure where to put notify function yet 
  virtual ~Observer() = default;
};
#endif