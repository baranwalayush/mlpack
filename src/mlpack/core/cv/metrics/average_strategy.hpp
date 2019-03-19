/**
 * @file average_strategy.hpp
 * @author Kirill Mishchenko
 *
 * Strategies for averaging.
 *
 * mlpack is free software; you may redistribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#ifndef MLPACK_CORE_CV_METRICS_AVERAGE_STRATEGY_HPP
#define MLPACK_CORE_CV_METRICS_AVERAGE_STRATEGY_HPP

namespace mlpack {
namespace cv {

/**
 * This enum declares possible strategies for averaging that can be used in some
 * metrics like precision, recall, and F1.
 *
 * The "Binary" strategy means binary classification is going to be used, and
 * there is no need to average.
 *
 * The "Micro" strategy is used for multiclass classification considering
 * TP(True Positive), TN(True Negative) and FN(False Negative) all at once
 * for evaluating both precision and recall.
 *
 * The "Macro" strategy is also used for multiclass classification but by
 * taking the average of individually calculated precision and recall.
 */
enum AverageStrategy
{
  Binary,
  Micro,
  Macro
};

} // namespace cv
} // namespace mlpack

#endif
