

//--------------MathDll.cpp
#include "main_lib.hpp"

MainMathLib::MainMathLib(void)
{
     m_simpleMulti = new SimpleMulti();
	 m_simpleAdd   = new Simpleadd();
}   

MainMathLib::~MainMathLib(void)
{
     delete m_simpleMulti;
	 delete m_simpleAdd;
}   

int MainMathLib::add()
{
     return m_simpleAdd->getadd();
}

int MainMathLib::multi()
{
	return m_simpleMulti->getmulti();
}