#include <Running.h>
#include <Prone.h>
#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>

void Running::idle(PlayerFSM* a)
{
	std::cout << "Running -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Running::climbing(PlayerFSM* a)
{
	std::cout << "Running -> Jump" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}