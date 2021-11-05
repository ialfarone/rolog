// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// init_
LogicalVector init_(String argv0);
RcppExport SEXP _rolog_init_(SEXP argv0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type argv0(argv0SEXP);
    rcpp_result_gen = Rcpp::wrap(init_(argv0));
    return rcpp_result_gen;
END_RCPP
}
// done_
LogicalVector done_();
RcppExport SEXP _rolog_done_() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(done_());
    return rcpp_result_gen;
END_RCPP
}
// consult_
LogicalVector consult_(CharacterVector files);
RcppExport SEXP _rolog_consult_(SEXP filesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type files(filesSEXP);
    rcpp_result_gen = Rcpp::wrap(consult_(files));
    return rcpp_result_gen;
END_RCPP
}
// once_
RObject once_(RObject query, List options);
RcppExport SEXP _rolog_once_(SEXP querySEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type query(querySEXP);
    Rcpp::traits::input_parameter< List >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(once_(query, options));
    return rcpp_result_gen;
END_RCPP
}
// findall_
List findall_(RObject query, List options);
RcppExport SEXP _rolog_findall_(SEXP querySEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type query(querySEXP);
    Rcpp::traits::input_parameter< List >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(findall_(query, options));
    return rcpp_result_gen;
END_RCPP
}
// portray_
RObject portray_(RObject query, List options);
RcppExport SEXP _rolog_portray_(SEXP querySEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type query(querySEXP);
    Rcpp::traits::input_parameter< List >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(portray_(query, options));
    return rcpp_result_gen;
END_RCPP
}
// query_
RObject query_(RObject query, List options);
RcppExport SEXP _rolog_query_(SEXP querySEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type query(querySEXP);
    Rcpp::traits::input_parameter< List >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(query_(query, options));
    return rcpp_result_gen;
END_RCPP
}
// query_close_
RObject query_close_();
RcppExport SEXP _rolog_query_close_() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(query_close_());
    return rcpp_result_gen;
END_RCPP
}
// submit_
RObject submit_();
RcppExport SEXP _rolog_submit_() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(submit_());
    return rcpp_result_gen;
END_RCPP
}
// call_
RObject call_(String query);
RcppExport SEXP _rolog_call_(SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(call_(query));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rolog_init_", (DL_FUNC) &_rolog_init_, 1},
    {"_rolog_done_", (DL_FUNC) &_rolog_done_, 0},
    {"_rolog_consult_", (DL_FUNC) &_rolog_consult_, 1},
    {"_rolog_once_", (DL_FUNC) &_rolog_once_, 2},
    {"_rolog_findall_", (DL_FUNC) &_rolog_findall_, 2},
    {"_rolog_query_open_", (DL_FUNC) &_rolog_query_open_, 2},
    {"_rolog_query_close_", (DL_FUNC) &_rolog_query_close_, 0},
    {"_rolog_submit_", (DL_FUNC) &_rolog_submit_, 0},
    {"_rolog_portray_", (DL_FUNC) &_rolog_portray_, 2},
    {"_rolog_call_", (DL_FUNC) &_rolog_call_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rolog(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
