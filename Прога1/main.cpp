#include "gpioaregisters.hpp" //for GPIOS
#include "rccregisters.hpp" //for RCC

int main()
{
  RCC::AHB1ENR::GPIOAEN::Enable::Set();
  GPIOA::MODER::MODER5::Output::Set();
  GPIOA::ODR::ODR5::Enable::Set();
  GPIOA::ODR::ODR5::Disable::Set(); 
  return 0;
}
