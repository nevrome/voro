// tools::package_native_routine_registration_skeleton(".")

#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
 Check these declarations against the C/Fortran source code.
 */

/* .Call calls */
extern SEXP _voro_voropp_Rcpp_interface(SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"_voro_voropp_Rcpp_interface", (DL_FUNC) &_voro_voropp_Rcpp_interface, 1},
  {NULL, NULL, 0}
};

void R_init_voro(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
