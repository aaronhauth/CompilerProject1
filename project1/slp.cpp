#include <algorithm>
#include "slp.h"


using namespace std;

/* To be implemented by stduents */
void CompoundStm::interp( SymbolTable& symbols )
{
}

/* To be implemented by stduents */
void AssignStm::interp( SymbolTable& symbols )
{
}

void PrintStm::interp( SymbolTable& symbols )
{
}

int IdExp::interp( SymbolTable& symbols )
{
}

int NumExp::interp( SymbolTable& symbols )
{
}


int OpExp::interp( SymbolTable& symbols )
{
}



int EseqExp::interp( SymbolTable& symbols )
{
}


void PairExpList::interp( SymbolTable& symbols)
{
}


int PairExpList::size() const
{
}


void LastExpList::interp( SymbolTable& symbols)
{
}


int LastExpList::size() const
{
}
