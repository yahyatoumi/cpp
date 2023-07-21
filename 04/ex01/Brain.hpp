#ifndef BRAIN_CLASS
#define BRAIN_CLASS

#include "Animal.hpp"

class Brain{

private:
    std::string ideas[100];

public:
    Brain(void);
    Brain(Brain &toCopy);
    ~Brain(void);
    Brain &operator=(Brain const &_new);
    std::string *getIdeas();
    void setIdeas(std::string *ideas, size_t size);
};
 
#endif