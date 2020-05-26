// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// arma2vec
Rcpp::NumericVector arma2vec(arma::vec x);
RcppExport SEXP _varapproxr_arma2vec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(arma2vec(x));
    return rcpp_result_gen;
END_RCPP
}
// blockDiag
arma::mat blockDiag(arma::field<arma::mat>& x);
RcppExport SEXP _varapproxr_blockDiag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(blockDiag(x));
    return rcpp_result_gen;
END_RCPP
}
// bind_cols
arma::mat bind_cols(arma::field<arma::mat>& x);
RcppExport SEXP _varapproxr_bind_cols(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bind_cols(x));
    return rcpp_result_gen;
END_RCPP
}
// mvn_entropy
double mvn_entropy(arma::mat& S);
RcppExport SEXP _varapproxr_mvn_entropy(SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(mvn_entropy(S));
    return rcpp_result_gen;
END_RCPP
}
// ig_entropy
double ig_entropy(double a, double b);
RcppExport SEXP _varapproxr_ig_entropy(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(ig_entropy(a, b));
    return rcpp_result_gen;
END_RCPP
}
// ig_E
double ig_E(double a, double b);
RcppExport SEXP _varapproxr_ig_E(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(ig_E(a, b));
    return rcpp_result_gen;
END_RCPP
}
// ig_E_inv
double ig_E_inv(double a, double b);
RcppExport SEXP _varapproxr_ig_E_inv(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(ig_E_inv(a, b));
    return rcpp_result_gen;
END_RCPP
}
// ig_E_log
double ig_E_log(double a, double b);
RcppExport SEXP _varapproxr_ig_E_log(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(ig_E_log(a, b));
    return rcpp_result_gen;
END_RCPP
}
// pnorm_mat
arma::mat pnorm_mat(arma::mat& m);
RcppExport SEXP _varapproxr_pnorm_mat(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(pnorm_mat(m));
    return rcpp_result_gen;
END_RCPP
}
// dnorm_mat
arma::mat dnorm_mat(arma::mat& m);
RcppExport SEXP _varapproxr_dnorm_mat(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(dnorm_mat(m));
    return rcpp_result_gen;
END_RCPP
}
// vb_lm
List vb_lm(const arma::mat& X, const arma::vec& y, const arma::vec& mu0, const arma::mat& Sigma0, const double a0, const double b0, const int prior, double tol, int maxiter, bool verbose);
RcppExport SEXP _varapproxr_vb_lm(SEXP XSEXP, SEXP ySEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP priorSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< const double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const int >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_lm(X, y, mu0, Sigma0, a0, b0, prior, tol, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// update_vb_lm
List update_vb_lm(List vb_fit, const arma::mat& X, const arma::vec& y, double tol, int maxiter, bool verbose);
RcppExport SEXP _varapproxr_update_vb_lm(SEXP vb_fitSEXP, SEXP XSEXP, SEXP ySEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type vb_fit(vb_fitSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(update_vb_lm(vb_fit, X, y, tol, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// vb_lmm
List vb_lmm(const arma::mat& X, const arma::mat& Z, const arma::vec& y, const arma::vec& mu_beta, const arma::mat& sigma_beta, arma::vec& mu, arma::mat& sigma, double Aeps, double Beps, double Au, double Bu, double Bqeps, double Bqu, double tol, int maxiter, bool verbose, bool trace);
RcppExport SEXP _varapproxr_vb_lmm(SEXP XSEXP, SEXP ZSEXP, SEXP ySEXP, SEXP mu_betaSEXP, SEXP sigma_betaSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP AepsSEXP, SEXP BepsSEXP, SEXP AuSEXP, SEXP BuSEXP, SEXP BqepsSEXP, SEXP BquSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma_beta(sigma_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type Aeps(AepsSEXP);
    Rcpp::traits::input_parameter< double >::type Beps(BepsSEXP);
    Rcpp::traits::input_parameter< double >::type Au(AuSEXP);
    Rcpp::traits::input_parameter< double >::type Bu(BuSEXP);
    Rcpp::traits::input_parameter< double >::type Bqeps(BqepsSEXP);
    Rcpp::traits::input_parameter< double >::type Bqu(BquSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_lmm(X, Z, y, mu_beta, sigma_beta, mu, sigma, Aeps, Beps, Au, Bu, Bqeps, Bqu, tol, maxiter, verbose, trace));
    return rcpp_result_gen;
END_RCPP
}
// b0
arma::vec b0(const arma::vec& mu, const arma::vec& sigma);
RcppExport SEXP _varapproxr_b0(SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(b0(mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// b1
arma::vec b1(const arma::vec& mu, const arma::vec& sigma);
RcppExport SEXP _varapproxr_b1(SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(b1(mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// B
void B(arma::vec& b0, arma::vec& b1, const arma::vec& mu, const arma::vec& sigma);
RcppExport SEXP _varapproxr_B(SEXP b0SEXP, SEXP b1SEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    B(b0, b1, mu, sigma);
    return R_NilValue;
END_RCPP
}
// jaakkola_jordan
double jaakkola_jordan(const arma::mat& X, const arma::vec& y, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p);
RcppExport SEXP _varapproxr_jaakkola_jordan(SEXP XSEXP, SEXP ySEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    rcpp_result_gen = Rcpp::wrap(jaakkola_jordan(X, y, eta1, eta2, eta1_p, eta2_p));
    return rcpp_result_gen;
END_RCPP
}
// jaakkola_jordan_n
double jaakkola_jordan_n(const arma::mat& X, const arma::vec& y, const arma::vec& n, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p);
RcppExport SEXP _varapproxr_jaakkola_jordan_n(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    rcpp_result_gen = Rcpp::wrap(jaakkola_jordan_n(X, y, n, eta1, eta2, eta1_p, eta2_p));
    return rcpp_result_gen;
END_RCPP
}
// saul_jordan
double saul_jordan(const arma::mat& X, const arma::vec& y, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p, arma::vec& omega1);
RcppExport SEXP _varapproxr_saul_jordan(SEXP XSEXP, SEXP ySEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP, SEXP omega1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type omega1(omega1SEXP);
    rcpp_result_gen = Rcpp::wrap(saul_jordan(X, y, eta1, eta2, eta1_p, eta2_p, omega1));
    return rcpp_result_gen;
END_RCPP
}
// saul_jordan_n
double saul_jordan_n(const arma::mat& X, const arma::vec& y, const arma::vec& n, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p, arma::vec& omega1);
RcppExport SEXP _varapproxr_saul_jordan_n(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP, SEXP omega1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type omega1(omega1SEXP);
    rcpp_result_gen = Rcpp::wrap(saul_jordan_n(X, y, n, eta1, eta2, eta1_p, eta2_p, omega1));
    return rcpp_result_gen;
END_RCPP
}
// knowles_minka_wand
double knowles_minka_wand(const arma::mat& X, const arma::vec& y, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p, const arma::vec& MS_p, const arma::vec& MS_s);
RcppExport SEXP _varapproxr_knowles_minka_wand(SEXP XSEXP, SEXP ySEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP, SEXP MS_pSEXP, SEXP MS_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type MS_p(MS_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type MS_s(MS_sSEXP);
    rcpp_result_gen = Rcpp::wrap(knowles_minka_wand(X, y, eta1, eta2, eta1_p, eta2_p, MS_p, MS_s));
    return rcpp_result_gen;
END_RCPP
}
// knowles_minka_wand_n
double knowles_minka_wand_n(const arma::mat& X, const arma::vec& y, const arma::vec& n, arma::vec& eta1, arma::vec& eta2, const arma::vec& eta1_p, const arma::vec& eta2_p, const arma::vec& MS_p, const arma::vec& MS_s);
RcppExport SEXP _varapproxr_knowles_minka_wand_n(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP eta1SEXP, SEXP eta2SEXP, SEXP eta1_pSEXP, SEXP eta2_pSEXP, SEXP MS_pSEXP, SEXP MS_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta1(eta1SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type eta2(eta2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta1_p(eta1_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta2_p(eta2_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type MS_p(MS_pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type MS_s(MS_sSEXP);
    rcpp_result_gen = Rcpp::wrap(knowles_minka_wand_n(X, y, n, eta1, eta2, eta1_p, eta2_p, MS_p, MS_s));
    return rcpp_result_gen;
END_RCPP
}
// vb_logistic
List vb_logistic(const arma::mat& X, const arma::vec& y, const arma::vec& mu0, const arma::mat& Sigma0, const arma::vec& mu_init, const arma::mat& Sigma_init, double tol, int maxiter, int maxiter_jj, std::string alg, bool verbose);
RcppExport SEXP _varapproxr_vb_logistic(SEXP XSEXP, SEXP ySEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP mu_initSEXP, SEXP Sigma_initSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP maxiter_jjSEXP, SEXP algSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_init(mu_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma_init(Sigma_initSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter_jj(maxiter_jjSEXP);
    Rcpp::traits::input_parameter< std::string >::type alg(algSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_logistic(X, y, mu0, Sigma0, mu_init, Sigma_init, tol, maxiter, maxiter_jj, alg, verbose));
    return rcpp_result_gen;
END_RCPP
}
// vb_logistic_n
List vb_logistic_n(const arma::mat& X, const arma::vec& y, const arma::vec& n, const arma::vec& mu0, const arma::mat& Sigma0, const arma::vec& mu_init, const arma::mat& Sigma_init, double tol, int maxiter, int maxiter_jj, std::string alg, bool verbose);
RcppExport SEXP _varapproxr_vb_logistic_n(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP mu_initSEXP, SEXP Sigma_initSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP maxiter_jjSEXP, SEXP algSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_init(mu_initSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma_init(Sigma_initSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter_jj(maxiter_jjSEXP);
    Rcpp::traits::input_parameter< std::string >::type alg(algSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_logistic_n(X, y, n, mu0, Sigma0, mu_init, Sigma_init, tol, maxiter, maxiter_jj, alg, verbose));
    return rcpp_result_gen;
END_RCPP
}
// vb_glmm
List vb_glmm(const arma::mat& X, const arma::mat& Z, const arma::vec& y, const arma::vec& mu_beta, const arma::mat& sigma_beta, arma::vec& mu, arma::mat& sigma, double Au, double Bu, double Bqu, double tol, int maxiter, bool verbose);
RcppExport SEXP _varapproxr_vb_glmm(SEXP XSEXP, SEXP ZSEXP, SEXP ySEXP, SEXP mu_betaSEXP, SEXP sigma_betaSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP AuSEXP, SEXP BuSEXP, SEXP BquSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu_beta(mu_betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma_beta(sigma_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type Au(AuSEXP);
    Rcpp::traits::input_parameter< double >::type Bu(BuSEXP);
    Rcpp::traits::input_parameter< double >::type Bqu(BquSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_glmm(X, Z, y, mu_beta, sigma_beta, mu, sigma, Au, Bu, Bqu, tol, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// vb_pois_reg
List vb_pois_reg(const arma::mat& X, const arma::vec& y, const arma::vec& n, const arma::vec& mu0, const arma::mat& Sigma0, double tol, int maxiter, bool verbose);
RcppExport SEXP _varapproxr_vb_pois_reg(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_pois_reg(X, y, n, mu0, Sigma0, tol, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// vb_pois_mm
List vb_pois_mm(const arma::mat& X, arma::field<arma::mat>& Zlist, const arma::vec& y, const arma::vec& n, arma::vec& mu0, const arma::mat& Sigma0, arma::vec& a0, double tol, int maxiter, bool verbose);
RcppExport SEXP _varapproxr_vb_pois_mm(SEXP XSEXP, SEXP ZlistSEXP, SEXP ySEXP, SEXP nSEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP a0SEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type Zlist(ZlistSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(vb_pois_mm(X, Zlist, y, n, mu0, Sigma0, a0, tol, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}
// ph_exponential
List ph_exponential(const arma::mat& X, const arma::vec& y, const arma::vec& v, const arma::vec& mu0, const arma::mat& Sigma0, double tol, int maxiter, bool verbose);
RcppExport SEXP _varapproxr_ph_exponential(SEXP XSEXP, SEXP ySEXP, SEXP vSEXP, SEXP mu0SEXP, SEXP Sigma0SEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma0(Sigma0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(ph_exponential(X, y, v, mu0, Sigma0, tol, maxiter, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_varapproxr_arma2vec", (DL_FUNC) &_varapproxr_arma2vec, 1},
    {"_varapproxr_blockDiag", (DL_FUNC) &_varapproxr_blockDiag, 1},
    {"_varapproxr_bind_cols", (DL_FUNC) &_varapproxr_bind_cols, 1},
    {"_varapproxr_mvn_entropy", (DL_FUNC) &_varapproxr_mvn_entropy, 1},
    {"_varapproxr_ig_entropy", (DL_FUNC) &_varapproxr_ig_entropy, 2},
    {"_varapproxr_ig_E", (DL_FUNC) &_varapproxr_ig_E, 2},
    {"_varapproxr_ig_E_inv", (DL_FUNC) &_varapproxr_ig_E_inv, 2},
    {"_varapproxr_ig_E_log", (DL_FUNC) &_varapproxr_ig_E_log, 2},
    {"_varapproxr_pnorm_mat", (DL_FUNC) &_varapproxr_pnorm_mat, 1},
    {"_varapproxr_dnorm_mat", (DL_FUNC) &_varapproxr_dnorm_mat, 1},
    {"_varapproxr_vb_lm", (DL_FUNC) &_varapproxr_vb_lm, 10},
    {"_varapproxr_update_vb_lm", (DL_FUNC) &_varapproxr_update_vb_lm, 6},
    {"_varapproxr_vb_lmm", (DL_FUNC) &_varapproxr_vb_lmm, 17},
    {"_varapproxr_b0", (DL_FUNC) &_varapproxr_b0, 2},
    {"_varapproxr_b1", (DL_FUNC) &_varapproxr_b1, 2},
    {"_varapproxr_B", (DL_FUNC) &_varapproxr_B, 4},
    {"_varapproxr_jaakkola_jordan", (DL_FUNC) &_varapproxr_jaakkola_jordan, 6},
    {"_varapproxr_jaakkola_jordan_n", (DL_FUNC) &_varapproxr_jaakkola_jordan_n, 7},
    {"_varapproxr_saul_jordan", (DL_FUNC) &_varapproxr_saul_jordan, 7},
    {"_varapproxr_saul_jordan_n", (DL_FUNC) &_varapproxr_saul_jordan_n, 8},
    {"_varapproxr_knowles_minka_wand", (DL_FUNC) &_varapproxr_knowles_minka_wand, 8},
    {"_varapproxr_knowles_minka_wand_n", (DL_FUNC) &_varapproxr_knowles_minka_wand_n, 9},
    {"_varapproxr_vb_logistic", (DL_FUNC) &_varapproxr_vb_logistic, 11},
    {"_varapproxr_vb_logistic_n", (DL_FUNC) &_varapproxr_vb_logistic_n, 12},
    {"_varapproxr_vb_glmm", (DL_FUNC) &_varapproxr_vb_glmm, 13},
    {"_varapproxr_vb_pois_reg", (DL_FUNC) &_varapproxr_vb_pois_reg, 8},
    {"_varapproxr_vb_pois_mm", (DL_FUNC) &_varapproxr_vb_pois_mm, 10},
    {"_varapproxr_ph_exponential", (DL_FUNC) &_varapproxr_ph_exponential, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_varapproxr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
