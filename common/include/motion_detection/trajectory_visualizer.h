/* trajectory_visualizer.h
 *
 * Copyright (C) 2014 Santosh Thoduka
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */
#ifndef TRAJECTORY_VISUALIZER_H_
#define TRAJECTORY_VISUALIZER_H_

#include <opencv2/core/core.hpp>

class TrajectoryVisualizer
{
    public:
        TrajectoryVisualizer();
        virtual ~TrajectoryVisualizer();

        void showTrajectories(const cv::Mat &original_image, cv::Mat &output_image, const std::vector<std::vector<cv::Point2f> > &trajectories);

    private:
        void showTrajectories(cv::Mat &output_image, const std::vector<std::vector<cv::Point2f> > &trajectories, const std::vector<cv::Scalar> &colours);

    private:
        cv::RNG rng;

};
#endif
