#ifndef Utilities_ExpressionFunctionSetter_h
#define Utilities_ExpressionFunctionSetter_h
/* \class reco::parser::ExpressionFunction
 *
 * Numerical expression setter
 *
 * \author Luca Lista, INFN
 *
 * \version $Revision: 1.1 $
 *
 */
#include "PhysicsTools/Utilities/src/ExpressionStack.h"
#include "PhysicsTools/Utilities/src/FunctionStack.h"

namespace reco {
  namespace parser {
    struct ExpressionFunctionSetter {
      ExpressionFunctionSetter( ExpressionStack & expStack, FunctionStack & funStack ) : 
	expStack_( expStack ), funStack_( funStack ) { }
      void operator()( const char *, const char * ) const;
    private:
      ExpressionStack & expStack_;
      FunctionStack & funStack_;
    };
  }
}

#endif
