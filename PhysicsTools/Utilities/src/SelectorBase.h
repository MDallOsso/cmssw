#ifndef Utilities_SelectorBase_h
#define Utilities_SelectorBase_h
/** \class SelectorBase
 *
 * Base class for all Reflex object selector 
 *
 * \author Luca Lista, INFN
 *
 * \version $Revision: 1.1 $
 *
 */

namespace ROOT { namespace Reflex { class Object; } }

namespace reco {
  namespace parser {
    class SelectorBase {
    public:
      /// destructor
      virtual ~SelectorBase() { }
      /// return true if the Refle object is selected
      virtual bool operator()( const ROOT::Reflex::Object & c ) const = 0;
    };
  }
}

#endif
