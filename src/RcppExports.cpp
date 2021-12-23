// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// readMSP
Rcpp::List readMSP(Rcpp::CharacterVector file, Rcpp::LogicalVector pc);
RcppExport SEXP _patRoon_readMSP(SEXP fileSEXP, SEXP pcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type pc(pcSEXP);
    rcpp_result_gen = Rcpp::wrap(readMSP(file, pc));
    return rcpp_result_gen;
END_RCPP
}
// writeMSPLibrary
void writeMSPLibrary(Rcpp::CharacterMatrix recordsM, Rcpp::List spectraList, Rcpp::CharacterVector outCV);
RcppExport SEXP _patRoon_writeMSPLibrary(SEXP recordsMSEXP, SEXP spectraListSEXP, SEXP outCVSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type recordsM(recordsMSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type spectraList(spectraListSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outCV(outCVSEXP);
    writeMSPLibrary(recordsM, spectraList, outCV);
    return R_NilValue;
END_RCPP
}
// readMoNAJSON
Rcpp::List readMoNAJSON(Rcpp::CharacterVector file);
RcppExport SEXP _patRoon_readMoNAJSON(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(readMoNAJSON(file));
    return rcpp_result_gen;
END_RCPP
}
// parseAdductConsXMLFile
Rcpp::List parseAdductConsXMLFile(Rcpp::CharacterVector file);
RcppExport SEXP _patRoon_parseAdductConsXMLFile(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(parseAdductConsXMLFile(file));
    return rcpp_result_gen;
END_RCPP
}
// parseFeatureXMLFile
Rcpp::DataFrame parseFeatureXMLFile(Rcpp::CharacterVector file);
RcppExport SEXP _patRoon_parseFeatureXMLFile(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(parseFeatureXMLFile(file));
    return rcpp_result_gen;
END_RCPP
}
// parseFeatConsXMLFile
Rcpp::List parseFeatConsXMLFile(Rcpp::CharacterVector file, Rcpp::IntegerVector anaCount);
RcppExport SEXP _patRoon_parseFeatConsXMLFile(SEXP fileSEXP, SEXP anaCountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file(fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type anaCount(anaCountSEXP);
    rcpp_result_gen = Rcpp::wrap(parseFeatConsXMLFile(file, anaCount));
    return rcpp_result_gen;
END_RCPP
}
// writeFeatureXML
void writeFeatureXML(Rcpp::DataFrame featList, Rcpp::CharacterVector out, Rcpp::LogicalVector hulls);
RcppExport SEXP _patRoon_writeFeatureXML(SEXP featListSEXP, SEXP outSEXP, SEXP hullsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type featList(featListSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type out(outSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type hulls(hullsSEXP);
    writeFeatureXML(featList, out, hulls);
    return R_NilValue;
END_RCPP
}
// specDistMatrix
Rcpp::NumericMatrix specDistMatrix(Rcpp::List specList, Rcpp::CharacterVector method, Rcpp::CharacterVector shift, Rcpp::NumericVector precMZs, Rcpp::NumericVector mzWeight, Rcpp::NumericVector intWeight, Rcpp::NumericVector mzWindow);
RcppExport SEXP _patRoon_specDistMatrix(SEXP specListSEXP, SEXP methodSEXP, SEXP shiftSEXP, SEXP precMZsSEXP, SEXP mzWeightSEXP, SEXP intWeightSEXP, SEXP mzWindowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type specList(specListSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type method(methodSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type precMZs(precMZsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWeight(mzWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type intWeight(intWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWindow(mzWindowSEXP);
    rcpp_result_gen = Rcpp::wrap(specDistMatrix(specList, method, shift, precMZs, mzWeight, intWeight, mzWindow));
    return rcpp_result_gen;
END_RCPP
}
// specDistRect
Rcpp::NumericMatrix specDistRect(Rcpp::List specList1, Rcpp::List specList2, Rcpp::CharacterVector method, Rcpp::CharacterVector shift, Rcpp::NumericVector precMZs1, Rcpp::NumericVector precMZs2, Rcpp::NumericVector mzWeight, Rcpp::NumericVector intWeight, Rcpp::NumericVector mzWindow);
RcppExport SEXP _patRoon_specDistRect(SEXP specList1SEXP, SEXP specList2SEXP, SEXP methodSEXP, SEXP shiftSEXP, SEXP precMZs1SEXP, SEXP precMZs2SEXP, SEXP mzWeightSEXP, SEXP intWeightSEXP, SEXP mzWindowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type specList1(specList1SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type specList2(specList2SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type method(methodSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type precMZs1(precMZs1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type precMZs2(precMZs2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWeight(mzWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type intWeight(intWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWindow(mzWindowSEXP);
    rcpp_result_gen = Rcpp::wrap(specDistRect(specList1, specList2, method, shift, precMZs1, precMZs2, mzWeight, intWeight, mzWindow));
    return rcpp_result_gen;
END_RCPP
}
// loadEICIntensities
Rcpp::NumericVector loadEICIntensities(Rcpp::List spectra, Rcpp::DataFrame featList, Rcpp::NumericVector rtWindow);
RcppExport SEXP _patRoon_loadEICIntensities(SEXP spectraSEXP, SEXP featListSEXP, SEXP rtWindowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type spectra(spectraSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type featList(featListSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rtWindow(rtWindowSEXP);
    rcpp_result_gen = Rcpp::wrap(loadEICIntensities(spectra, featList, rtWindow));
    return rcpp_result_gen;
END_RCPP
}
// loadEICs
Rcpp::List loadEICs(Rcpp::List spectra, Rcpp::NumericVector rtMins, Rcpp::NumericVector rtMaxs, Rcpp::NumericVector mzMins, Rcpp::NumericVector mzMaxs);
RcppExport SEXP _patRoon_loadEICs(SEXP spectraSEXP, SEXP rtMinsSEXP, SEXP rtMaxsSEXP, SEXP mzMinsSEXP, SEXP mzMaxsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type spectra(spectraSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rtMins(rtMinsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rtMaxs(rtMaxsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzMins(mzMinsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzMaxs(mzMaxsSEXP);
    rcpp_result_gen = Rcpp::wrap(loadEICs(spectra, rtMins, rtMaxs, mzMins, mzMaxs));
    return rcpp_result_gen;
END_RCPP
}
// makeSAFDInput
Rcpp::List makeSAFDInput(Rcpp::List spectra, Rcpp::NumericVector mzRange);
RcppExport SEXP _patRoon_makeSAFDInput(SEXP spectraSEXP, SEXP mzRangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type spectra(spectraSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzRange(mzRangeSEXP);
    rcpp_result_gen = Rcpp::wrap(makeSAFDInput(spectra, mzRange));
    return rcpp_result_gen;
END_RCPP
}
// binSpectra
Rcpp::DataFrame binSpectra(Rcpp::DataFrame sp1, Rcpp::DataFrame sp2, Rcpp::CharacterVector shift, Rcpp::NumericVector precDiff, Rcpp::NumericVector mzWindow);
RcppExport SEXP _patRoon_binSpectra(SEXP sp1SEXP, SEXP sp2SEXP, SEXP shiftSEXP, SEXP precDiffSEXP, SEXP mzWindowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type sp1(sp1SEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type sp2(sp2SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type precDiff(precDiffSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWindow(mzWindowSEXP);
    rcpp_result_gen = Rcpp::wrap(binSpectra(sp1, sp2, shift, precDiff, mzWindow));
    return rcpp_result_gen;
END_RCPP
}
// calcSpecSimilarity
Rcpp::NumericVector calcSpecSimilarity(Rcpp::DataFrame sp1, Rcpp::DataFrame sp2, Rcpp::CharacterVector method, Rcpp::CharacterVector shift, Rcpp::NumericVector precDiff, Rcpp::NumericVector mzWeight, Rcpp::NumericVector intWeight, Rcpp::NumericVector mzWindow);
RcppExport SEXP _patRoon_calcSpecSimilarity(SEXP sp1SEXP, SEXP sp2SEXP, SEXP methodSEXP, SEXP shiftSEXP, SEXP precDiffSEXP, SEXP mzWeightSEXP, SEXP intWeightSEXP, SEXP mzWindowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type sp1(sp1SEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type sp2(sp2SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type method(methodSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type shift(shiftSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type precDiff(precDiffSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWeight(mzWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type intWeight(intWeightSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mzWindow(mzWindowSEXP);
    rcpp_result_gen = Rcpp::wrap(calcSpecSimilarity(sp1, sp2, method, shift, precDiff, mzWeight, intWeight, mzWindow));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_patRoon_readMSP", (DL_FUNC) &_patRoon_readMSP, 2},
    {"_patRoon_writeMSPLibrary", (DL_FUNC) &_patRoon_writeMSPLibrary, 3},
    {"_patRoon_readMoNAJSON", (DL_FUNC) &_patRoon_readMoNAJSON, 1},
    {"_patRoon_parseAdductConsXMLFile", (DL_FUNC) &_patRoon_parseAdductConsXMLFile, 1},
    {"_patRoon_parseFeatureXMLFile", (DL_FUNC) &_patRoon_parseFeatureXMLFile, 1},
    {"_patRoon_parseFeatConsXMLFile", (DL_FUNC) &_patRoon_parseFeatConsXMLFile, 2},
    {"_patRoon_writeFeatureXML", (DL_FUNC) &_patRoon_writeFeatureXML, 3},
    {"_patRoon_specDistMatrix", (DL_FUNC) &_patRoon_specDistMatrix, 7},
    {"_patRoon_specDistRect", (DL_FUNC) &_patRoon_specDistRect, 9},
    {"_patRoon_loadEICIntensities", (DL_FUNC) &_patRoon_loadEICIntensities, 3},
    {"_patRoon_loadEICs", (DL_FUNC) &_patRoon_loadEICs, 5},
    {"_patRoon_makeSAFDInput", (DL_FUNC) &_patRoon_makeSAFDInput, 2},
    {"_patRoon_binSpectra", (DL_FUNC) &_patRoon_binSpectra, 5},
    {"_patRoon_calcSpecSimilarity", (DL_FUNC) &_patRoon_calcSpecSimilarity, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_patRoon(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
