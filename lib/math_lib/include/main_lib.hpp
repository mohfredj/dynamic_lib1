#include "simple_multi.hpp"
#include "simple_add.hpp"

class SimpleMulti;
class simpleAdd;

class __declspec(dllexport) MainMathLib
{
private:
	SimpleMulti * m_simpleMulti;
   Simpleadd*   m_simpleAdd;

public:
     MainMathLib(void);
    ~MainMathLib(void);
    int add();
	int multi() ;
};


