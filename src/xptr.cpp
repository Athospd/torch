// Vendored code from https://github.com/randy3k/xptr/blob/master/src/xptr.c
// MIT Licensed
// YEAR: 2017
// COPYRIGHT HOLDER: Randy Lai

#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <stdio.h>

void check_is_xptr(SEXP s) {
  if (TYPEOF(s) != EXTPTRSXP) {
    error("expect an externalptr");
  }
}

// [[Rcpp::export]]
SEXP set_xptr_address(SEXP s, SEXP p) {
  check_is_xptr(s);
  check_is_xptr(p);
  R_SetExternalPtrAddr(s, R_ExternalPtrAddr(p));
  return R_NilValue;
}

// [[Rcpp::export]]
SEXP set_xptr_protected(SEXP s, SEXP pro) {
  check_is_xptr(s);
  R_SetExternalPtrProtected(s, pro);
  return R_NilValue;
}


