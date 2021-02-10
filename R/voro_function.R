#' v
#'
#' @param x voro++-input
#' 
#' @export
v <- function(x) {
  # run voro++
  voropp_Rcpp_interface(x)
}
