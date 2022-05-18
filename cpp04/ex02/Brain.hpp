#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain {
private:
    std::string	_ideas[100];
public:
    Brain(void);
	virtual ~Brain(void);
	Brain(Brain const &src);
    Brain &operator=(Brain const &obj);
};

#endif
