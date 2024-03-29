// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// numModels_cpp
int numModels_cpp(int const& K, int const& P);
RcppExport SEXP _bmabasket_numModels_cpp(SEXP KSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int const& >::type K(KSEXP);
    Rcpp::traits::input_parameter< int const& >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(numModels_cpp(K, P));
    return rcpp_result_gen;
END_RCPP
}
// logPostProb
List logPostProb(arma::vec const& pi0, arma::mat const& datMat, arma::vec const& partition, double    const& a0, double    const& b0, double    const& lbeta_a0b0);
RcppExport SEXP _bmabasket_logPostProb(SEXP pi0SEXP, SEXP datMatSEXP, SEXP partitionSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP lbeta_a0b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type pi0(pi0SEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type partition(partitionSEXP);
    Rcpp::traits::input_parameter< double    const& >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double    const& >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< double    const& >::type lbeta_a0b0(lbeta_a0b0SEXP);
    rcpp_result_gen = Rcpp::wrap(logPostProb(pi0, datMat, partition, a0, b0, lbeta_a0b0));
    return rcpp_result_gen;
END_RCPP
}
// bma_cpp
Rcpp::List bma_cpp(arma::vec const& pi0, arma::mat const& datMat, arma::mat const& partitionMat, double    const& mu0, double    const& phi0, arma::vec const& logModelPriors);
RcppExport SEXP _bmabasket_bma_cpp(SEXP pi0SEXP, SEXP datMatSEXP, SEXP partitionMatSEXP, SEXP mu0SEXP, SEXP phi0SEXP, SEXP logModelPriorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type pi0(pi0SEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type datMat(datMatSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type partitionMat(partitionMatSEXP);
    Rcpp::traits::input_parameter< double    const& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double    const& >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type logModelPriors(logModelPriorsSEXP);
    rcpp_result_gen = Rcpp::wrap(bma_cpp(pi0, datMat, partitionMat, mu0, phi0, logModelPriors));
    return rcpp_result_gen;
END_RCPP
}
// collapseData
arma::mat collapseData(arma::mat const& yMat, arma::vec const& model);
RcppExport SEXP _bmabasket_collapseData(SEXP yMatSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type yMat(yMatSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(collapseData(yMat, model));
    return rcpp_result_gen;
END_RCPP
}
// simData
arma::mat simData(int        const& K0, int        const& I0, arma::ivec const& targSSPer, arma::vec  const& rRates, arma::vec  const& eScales, arma::vec  const& aParms);
RcppExport SEXP _bmabasket_simData(SEXP K0SEXP, SEXP I0SEXP, SEXP targSSPerSEXP, SEXP rRatesSEXP, SEXP eScalesSEXP, SEXP aParmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int        const& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< int        const& >::type I0(I0SEXP);
    Rcpp::traits::input_parameter< arma::ivec const& >::type targSSPer(targSSPerSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type rRates(rRatesSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type eScales(eScalesSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type aParms(aParmsSEXP);
    rcpp_result_gen = Rcpp::wrap(simData(K0, I0, targSSPer, rRates, eScales, aParms));
    return rcpp_result_gen;
END_RCPP
}
// bma_design_cpp
Rcpp::List bma_design_cpp(int        const& nSims, arma::vec  const& eRates, arma::vec  const& rRates, arma::vec  const& aParms, arma::vec  const& ppEffCrit, arma::vec  const& ppFutCrit, int        const& futOnly, arma::vec  const& rRatesNull, arma::vec  const& rRatesAlt, int        const& minSSFut, int        const& minSSEff, arma::imat const& minSSEnr, arma::imat const& maxSSEnr, arma::ivec const& targSSPer, int        const& I0, double     const& mu0, double     const& phi0, arma::mat  const& models, arma::rowvec  const& logPriorModelProbs);
RcppExport SEXP _bmabasket_bma_design_cpp(SEXP nSimsSEXP, SEXP eRatesSEXP, SEXP rRatesSEXP, SEXP aParmsSEXP, SEXP ppEffCritSEXP, SEXP ppFutCritSEXP, SEXP futOnlySEXP, SEXP rRatesNullSEXP, SEXP rRatesAltSEXP, SEXP minSSFutSEXP, SEXP minSSEffSEXP, SEXP minSSEnrSEXP, SEXP maxSSEnrSEXP, SEXP targSSPerSEXP, SEXP I0SEXP, SEXP mu0SEXP, SEXP phi0SEXP, SEXP modelsSEXP, SEXP logPriorModelProbsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int        const& >::type nSims(nSimsSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type eRates(eRatesSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type rRates(rRatesSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type aParms(aParmsSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type ppEffCrit(ppEffCritSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type ppFutCrit(ppFutCritSEXP);
    Rcpp::traits::input_parameter< int        const& >::type futOnly(futOnlySEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type rRatesNull(rRatesNullSEXP);
    Rcpp::traits::input_parameter< arma::vec  const& >::type rRatesAlt(rRatesAltSEXP);
    Rcpp::traits::input_parameter< int        const& >::type minSSFut(minSSFutSEXP);
    Rcpp::traits::input_parameter< int        const& >::type minSSEff(minSSEffSEXP);
    Rcpp::traits::input_parameter< arma::imat const& >::type minSSEnr(minSSEnrSEXP);
    Rcpp::traits::input_parameter< arma::imat const& >::type maxSSEnr(maxSSEnrSEXP);
    Rcpp::traits::input_parameter< arma::ivec const& >::type targSSPer(targSSPerSEXP);
    Rcpp::traits::input_parameter< int        const& >::type I0(I0SEXP);
    Rcpp::traits::input_parameter< double     const& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double     const& >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< arma::mat  const& >::type models(modelsSEXP);
    Rcpp::traits::input_parameter< arma::rowvec  const& >::type logPriorModelProbs(logPriorModelProbsSEXP);
    rcpp_result_gen = Rcpp::wrap(bma_design_cpp(nSims, eRates, rRates, aParms, ppEffCrit, ppFutCrit, futOnly, rRatesNull, rRatesAlt, minSSFut, minSSEff, minSSEnr, maxSSEnr, targSSPer, I0, mu0, phi0, models, logPriorModelProbs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bmabasket_numModels_cpp", (DL_FUNC) &_bmabasket_numModels_cpp, 2},
    {"_bmabasket_logPostProb", (DL_FUNC) &_bmabasket_logPostProb, 6},
    {"_bmabasket_bma_cpp", (DL_FUNC) &_bmabasket_bma_cpp, 6},
    {"_bmabasket_collapseData", (DL_FUNC) &_bmabasket_collapseData, 2},
    {"_bmabasket_simData", (DL_FUNC) &_bmabasket_simData, 6},
    {"_bmabasket_bma_design_cpp", (DL_FUNC) &_bmabasket_bma_design_cpp, 19},
    {NULL, NULL, 0}
};

RcppExport void R_init_bmabasket(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
