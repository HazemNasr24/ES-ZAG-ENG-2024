#include "main.h"
unsigned int Var ;
unsigned int Bitno;

unsigned int Set_Bit(unsigned int Var,unsigned int bitnum){
 return Var | (1 << bitnum);
}
unsigned int Clear_Bit(unsigned int Var,unsigned int bitnum){
return Var &~(1 << bitnum);
}
unsigned int Toggle_Bit(unsigned int Var,unsigned int bitnum){
return Var ^(1 << bitnum);
}
