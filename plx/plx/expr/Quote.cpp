#include <plx/data/Array.hpp>
#include <plx/data/HashTable.hpp>
#include <plx/data/List.hpp>
#include <plx/data/Triple.hpp>
#include <plx/evaluator/Evaluator.hpp>
#include <plx/literal/Nil.hpp>
#include <plx/literal/String.hpp>
#include <plx/object/Globals.hpp>
#include <plx/object/Object.hpp>
#include <plx/object/TypeIds.hpp>
#include <plx/expr/Quote.hpp>

namespace PLX {

    Quote::Quote(Object* expression): _expression(expression) {}
    
    Object* Quote::eval(Evaluator* etor) {
        return _expression;
    }
        

    TypeId Quote::typeId() const {
        return TypeId::E_QUOTE;
    }

    void Quote::showOn(std::ostream& os) const {
        os << "'" << _expression->toString() << "'";
    }

}
