/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(p25_frame_assembler.h) */
/* BINDTOOL_HEADER_FILE_HASH(1a2507e84c52b9f629ebbeb6a9afe6c7) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25_repeater/p25_frame_assembler.h>
// pydoc.h is automatically generated in the build directory
#include <p25_frame_assembler_pydoc.h>

void bind_p25_frame_assembler(py::module &m) {

  using p25_frame_assembler = ::gr::op25_repeater::p25_frame_assembler;

  py::class_<p25_frame_assembler, gr::block, gr::basic_block,
             std::shared_ptr<p25_frame_assembler>>(m, "p25_frame_assembler",
                                                   D(p25_frame_assembler))

      .def(py::init(&p25_frame_assembler::make), py::arg("udp_host"),
           py::arg("port"), py::arg("debug"), py::arg("do_imbe"),
           py::arg("do_output"), py::arg("do_msgq"), py::arg("queue"),
           py::arg("do_audio_output"), py::arg("do_phase2_tdma"),
           py::arg("do_nocrypt"), D(p25_frame_assembler, make))

      .def("set_debug", &p25_frame_assembler::set_debug, py::arg("debug"),
           D(p25_frame_assembler, set_debug))

      .def("control", &p25_frame_assembler::control, py::arg("args"),
           D(p25_frame_assembler, control))

      ;
}
