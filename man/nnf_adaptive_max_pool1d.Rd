% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/nnf-pooling.R
\name{nnf_adaptive_max_pool1d}
\alias{nnf_adaptive_max_pool1d}
\title{Adaptive_max_pool1d}
\usage{
nnf_adaptive_max_pool1d(input, output_size, return_indices = FALSE)
}
\arguments{
\item{input}{input tensor of shape (minibatch , in_channels , iW)}

\item{output_size}{the target output size (single integer)}

\item{return_indices}{whether to return pooling indices. Default: \code{FALSE}}
}
\description{
Applies a 1D adaptive max pooling over an input signal composed of
several input planes.
}
