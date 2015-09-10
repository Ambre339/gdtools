// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __gdtools_RcppExports_h__
#define __gdtools_RcppExports_h__

#include <Rcpp.h>

namespace gdtools {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("gdtools", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("gdtools", "gdtools_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in gdtools");
            }
        }
    }

    inline NumericVector str_extent(std::string str, bool bold = false, bool italic = false, std::string fontname = "Sans", int fontsize = 12) {
        typedef SEXP(*Ptr_str_extent)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_str_extent p_str_extent = NULL;
        if (p_str_extent == NULL) {
            validateSignature("NumericVector(*str_extent)(std::string,bool,bool,std::string,int)");
            p_str_extent = (Ptr_str_extent)R_GetCCallable("gdtools", "gdtools_str_extent");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_str_extent(Rcpp::wrap(str), Rcpp::wrap(bold), Rcpp::wrap(italic), Rcpp::wrap(fontname), Rcpp::wrap(fontsize));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericMatrix str_extents(CharacterVector str, bool bold = false, bool italic = false, std::string fontname = "Sans", int fontsize = 12) {
        typedef SEXP(*Ptr_str_extents)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_str_extents p_str_extents = NULL;
        if (p_str_extents == NULL) {
            validateSignature("NumericMatrix(*str_extents)(CharacterVector,bool,bool,std::string,int)");
            p_str_extents = (Ptr_str_extents)R_GetCCallable("gdtools", "gdtools_str_extents");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_str_extents(Rcpp::wrap(str), Rcpp::wrap(bold), Rcpp::wrap(italic), Rcpp::wrap(fontname), Rcpp::wrap(fontsize));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericMatrix >(__result);
    }

    inline NumericVector get_font_info(std::string str, int bold, int italic, std::string fontname, int fontsize) {
        typedef SEXP(*Ptr_get_font_info)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_get_font_info p_get_font_info = NULL;
        if (p_get_font_info == NULL) {
            validateSignature("NumericVector(*get_font_info)(std::string,int,int,std::string,int)");
            p_get_font_info = (Ptr_get_font_info)R_GetCCallable("gdtools", "gdtools_get_font_info");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_get_font_info(Rcpp::wrap(str), Rcpp::wrap(bold), Rcpp::wrap(italic), Rcpp::wrap(fontname), Rcpp::wrap(fontsize));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

}

#endif // __gdtools_RcppExports_h__
