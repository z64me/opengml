#pragma once

#include "Compare.hpp"

#include "ogm/interpreter/Variable.hpp"

#include <forward_list>

namespace ogm { namespace interpreter
{
    struct DSMap
    {
        struct MarkedVariable
        {
            enum EntryFlag
            {
                NONE,
                LIST,
                MAP
            } m_flag;
            Variable v;

            MarkedVariable(Variable&& from)
                : v(std::move(from))
                , m_flag(NONE)
            { }

            Variable* operator->()
            {
                return &v;
            }

            const Variable* operator*() const
            {
                return &v;
            }
        };

        std::map<Variable, MarkedVariable, DSComparator> m_data;
    };
}}
