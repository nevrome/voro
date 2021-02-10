#' @useDynLib voro
#' @importFrom Rcpp evalCpp
NULL

#' @export
.onUnload <- function(libpath) {
  library.dynam.unload("voro", libpath)
}
