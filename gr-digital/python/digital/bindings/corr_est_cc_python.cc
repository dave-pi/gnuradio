/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(corr_est_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(bc2913cc6c389d7d0eecd401f081f6f1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/corr_est_cc.h>
// pydoc.h is automatically generated in the build directory
#include <corr_est_cc_pydoc.h>

void bind_corr_est_cc(py::module& m)
{

    using corr_est_cc = ::gr::digital::corr_est_cc;

    py::enum_<gr::digital::tm_type>(m, "tm_type")
        .value("THRESHOLD_DYNAMIC", gr::digital::THRESHOLD_DYNAMIC)   // 0
        .value("THRESHOLD_ABSOLUTE", gr::digital::THRESHOLD_ABSOLUTE) // 1
        .export_values();

    py::implicitly_convertible<int, gr::digital::tm_type>();

    py::class_<corr_est_cc,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<corr_est_cc>>(m, "corr_est_cc", D(corr_est_cc))

        .def(py::init(&corr_est_cc::make),
             py::arg("symbols"),
             py::arg("sps"),
             py::arg("mark_delay"),
             py::arg("threshold") = 0.90000000000000002,
             py::arg("threshold_method") = ::gr::digital::tm_type::THRESHOLD_ABSOLUTE,
             D(corr_est_cc, make))


        .def("symbols", &corr_est_cc::symbols, D(corr_est_cc, symbols))


        .def("set_symbols",
             &corr_est_cc::set_symbols,
             py::arg("symbols"),
             D(corr_est_cc, set_symbols))


        .def("mark_delay", &corr_est_cc::mark_delay, D(corr_est_cc, mark_delay))


        .def("set_mark_delay",
             &corr_est_cc::set_mark_delay,
             py::arg("mark_delay"),
             D(corr_est_cc, set_mark_delay))


        .def("threshold", &corr_est_cc::threshold, D(corr_est_cc, threshold))


        .def("set_threshold",
             &corr_est_cc::set_threshold,
             py::arg("threshold"),
             D(corr_est_cc, set_threshold));
}
