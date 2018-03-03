/***************************************************************************
* Copyright (c) 2016, Johan Mabille, Loic Gouarin and Sylvain Corlay       *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XCPP_DISPLAY_HPP
#define XCPP_DISPLAY_HPP

#include "xmime.hpp"

namespace xcpp
{
    template <class T>
    void display(const T& t)
    {
        using ::xcpp::mime_bundle_repr;
        xeus::get_interpreter().display_data(
            mime_bundle_repr(&t),
            xeus::xjson::object(),
            xeus::xjson::object()
        );
    }
}

#endif