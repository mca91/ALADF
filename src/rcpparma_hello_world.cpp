// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

// we only include RcppArmadillo.h which pulls Rcpp.h in for us
#include "RcppArmadillo.h"

// [[Rcpp::depends(RcppArmadillo)]]
using namespace arma;
using namespace Rcpp;

// [[Rcpp::plugins("cpp14")]]

// *************** some helper functions ****************

// square root of matrix inverse
// [[Rcpp::export]]
arma::mat m_inv_sqrt(const arma::mat& X) {
  return sqrtmat_sympd(inv_sympd(X));
}
