// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// binary_repr
CharacterVector binary_repr(SEXP x);
RcppExport SEXP _pryr_binary_repr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_repr(x));
    return rcpp_result_gen;
END_RCPP
}
// hex_repr
CharacterVector hex_repr(SEXP x);
RcppExport SEXP _pryr_hex_repr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(hex_repr(x));
    return rcpp_result_gen;
END_RCPP
}
// binary2hex
CharacterVector binary2hex(CharacterVector x);
RcppExport SEXP _pryr_binary2hex(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(binary2hex(x));
    return rcpp_result_gen;
END_RCPP
}
// inspect_
List inspect_(SEXP x, Environment base_env);
RcppExport SEXP _pryr_inspect_(SEXP xSEXP, SEXP base_envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Environment >::type base_env(base_envSEXP);
    rcpp_result_gen = Rcpp::wrap(inspect_(x, base_env));
    return rcpp_result_gen;
END_RCPP
}
// address2
std::string address2(Symbol name, Environment env);
RcppExport SEXP _pryr_address2(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(address2(name, env));
    return rcpp_result_gen;
END_RCPP
}
// named2
int named2(Symbol name, Environment env);
RcppExport SEXP _pryr_named2(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(named2(name, env));
    return rcpp_result_gen;
END_RCPP
}
// is_promise2
bool is_promise2(Symbol name, Environment env);
RcppExport SEXP _pryr_is_promise2(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(is_promise2(name, env));
    return rcpp_result_gen;
END_RCPP
}
// promise_code
SEXP promise_code(Symbol name, Environment env);
RcppExport SEXP _pryr_promise_code(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(promise_code(name, env));
    return rcpp_result_gen;
END_RCPP
}
// promise_value
SEXP promise_value(Symbol name, Environment env);
RcppExport SEXP _pryr_promise_value(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(promise_value(name, env));
    return rcpp_result_gen;
END_RCPP
}
// promise_evaled
bool promise_evaled(Symbol name, Environment env);
RcppExport SEXP _pryr_promise_evaled(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(promise_evaled(name, env));
    return rcpp_result_gen;
END_RCPP
}
// promise_env
SEXP promise_env(Symbol name, Environment env);
RcppExport SEXP _pryr_promise_env(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(promise_env(name, env));
    return rcpp_result_gen;
END_RCPP
}
// makeExplicit
RObject makeExplicit(SEXP prom);
RcppExport SEXP _pryr_makeExplicit(SEXP promSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type prom(promSEXP);
    rcpp_result_gen = Rcpp::wrap(makeExplicit(prom));
    return rcpp_result_gen;
END_RCPP
}
// explicitPromise
RObject explicitPromise(Symbol name, Environment env);
RcppExport SEXP _pryr_explicitPromise(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(explicitPromise(name, env));
    return rcpp_result_gen;
END_RCPP
}
// explicitDots
std::vector<RObject> explicitDots(Environment env);
RcppExport SEXP _pryr_explicitDots(SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(explicitDots(env));
    return rcpp_result_gen;
END_RCPP
}
// slice
CharacterVector slice(CharacterVector x, int k, std::string sep);
RcppExport SEXP _pryr_slice(SEXP xSEXP, SEXP kSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(slice(x, k, sep));
    return rcpp_result_gen;
END_RCPP
}
// sexp_type
std::string sexp_type(SEXP x);
RcppExport SEXP _pryr_sexp_type(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sexp_type(x));
    return rcpp_result_gen;
END_RCPP
}
// typename2
std::string typename2(Symbol name, Environment env);
RcppExport SEXP _pryr_typename2(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(typename2(name, env));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pryr_binary_repr", (DL_FUNC) &_pryr_binary_repr, 1},
    {"_pryr_hex_repr", (DL_FUNC) &_pryr_hex_repr, 1},
    {"_pryr_binary2hex", (DL_FUNC) &_pryr_binary2hex, 1},
    {"_pryr_inspect_", (DL_FUNC) &_pryr_inspect_, 2},
    {"_pryr_address2", (DL_FUNC) &_pryr_address2, 2},
    {"_pryr_named2", (DL_FUNC) &_pryr_named2, 2},
    {"_pryr_is_promise2", (DL_FUNC) &_pryr_is_promise2, 2},
    {"_pryr_promise_code", (DL_FUNC) &_pryr_promise_code, 2},
    {"_pryr_promise_value", (DL_FUNC) &_pryr_promise_value, 2},
    {"_pryr_promise_evaled", (DL_FUNC) &_pryr_promise_evaled, 2},
    {"_pryr_promise_env", (DL_FUNC) &_pryr_promise_env, 2},
    {"_pryr_makeExplicit", (DL_FUNC) &_pryr_makeExplicit, 1},
    {"_pryr_explicitPromise", (DL_FUNC) &_pryr_explicitPromise, 2},
    {"_pryr_explicitDots", (DL_FUNC) &_pryr_explicitDots, 1},
    {"_pryr_slice", (DL_FUNC) &_pryr_slice, 3},
    {"_pryr_sexp_type", (DL_FUNC) &_pryr_sexp_type, 1},
    {"_pryr_typename2", (DL_FUNC) &_pryr_typename2, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_pryr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
