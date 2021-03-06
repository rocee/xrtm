/******************************************************************************%
**
**    Copyright (C) 2007-2012 Greg McGarragh <gregm@atmos.colostate.edu>
**
**    This source code is licensed under the GNU General Public License (GPL),
**    Version 3.  See the file COPYING for more details.
**
*******************************************************************************/

#ifndef XRTM_EIG_BVP_A_H
#define XRTM_EIG_BVP_A_H

#include "xrtm_save_tree.h"
#include "xrtm_work.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct {
     void (*free)(void *);
     int *ipiv;
     double **lambda;
     double **A;
     double  *B;
     double **c;
} forward_save_solve_bvp_data;


typedef struct {
     void (*free)(void *);
     int *ipiv;
     dcomplex **lambda;
     dcomplex **A;
     dcomplex  *B;
     dcomplex **c;
} forward_save_solve_bvp_data2;


typedef struct {
     void (*free)(void *);
     double **lambda;
} forward_save_calc_radiance_levels_data;


typedef struct {
     void (*free)(void *);
     dcomplex **lambda;
} forward_save_calc_radiance_levels_data2;


typedef struct {
     void (*free)(void *);
     int thermal;
     int vector;
     double ***tpr;
     double ***tmr;
     double ***gamma;
     double **nu;
     double ***X_p;
     double ***X_m;
     double **F_p;
     double **F_m;
     double **F_p2;
     double **F_m2;
     double **F0_p;
     double **F0_m;
     double **F1_p;
     double **F1_m;
     double *B;
     dcomplex **nu_c;
     dcomplex***X_p_c;
     dcomplex ***X_m_c;
     dcomplex *B_c;
} forward_save_rtm_eig_bvp_data;


#include "prototypes/xrtm_eig_bvp_a_p.h"


#ifdef __cplusplus
}
#endif

#endif /* XRTM_EIG_BVP_A_H */
