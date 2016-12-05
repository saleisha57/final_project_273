#ifndef __COOK_H__
#define __COOK_H__

class Cook : public Staff
{
 protected:
  
  int num_cooks;
  int max_time_c;
  int min_time_c;
  
 public:

  Cook();
  
  Cook(int max, int min){
    max_time_c = max; // setting max time
    
    min_time_c = min; //setting min time
    
    std::cout<<"In con"<<std::endl; //lazy did not want to type cnstrctr
    
  };
  
  void do_work()
  {
    //possible pay rate
    
    std::cout<<"i am here"<<std::endl; //testing enter of function 
    
  } 
  
};



#endif
