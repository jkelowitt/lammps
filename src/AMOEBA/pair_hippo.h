/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   https://www.lammps.org/ Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef PAIR_CLASS
// clang-format off
PairStyle(hippo,PairHippo);
// clang-format on
#else

#ifndef LMP_PAIR_HIPPO_H
#define LMP_PAIR_HIPPO_H

#include "pair_amoeba.h"

namespace LAMMPS_NS {

class PairHippo : public PairAmoeba {
 public:
  PairHippo(class LAMMPS *);
};
}    // namespace LAMMPS_NS
#endif
#endif
