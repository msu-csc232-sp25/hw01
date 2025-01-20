/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    task3_test.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Task 3 test fixture.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include <gtest/gtest.h>
#include <numbers>
#include "csc232_test_utils.h"
#include "shape.h"
#include "circle.h"

namespace csc232 {
    class Task3TestFixture : public CSC232BaseTestFixture {
    public:
        Task3TestFixture() = default;

        ~Task3TestFixture() override = default;

    protected:
        // Reusable objects for each unit test in this test fixture
    };

#if !TEST_TASK3
    TEST_F(Task3TestFixture, Bootstrap) {
        std::cerr << "Task 3 is not ready for evaluation; please toggle the TEST_TASK3 macro to TRUE\n";
        SUCCEED();
    }

#else
    // TODO: Add unit tests as needed for task 3
    TEST_F(Task3TestFixture, ItCanDeclareCircles) {
        Shape *circle = new Circle;
        EXPECT_TRUE(dynamic_cast<Circle *>(circle));
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanDeclareInitializedCircles) {
        Shape *circle = new Circle{1};
        EXPECT_TRUE(dynamic_cast<Circle *>(circle));
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanComputeArea) {
        auto circle = new Circle{1};
        auto expected = std::numbers::pi;
        auto actual = circle->area();
        EXPECT_DOUBLE_EQ(expected, actual);
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanComputePerimeter) {
        auto circle = new Circle{1};
        auto expected = 2 * std::numbers::pi;
        auto actual = circle->perimeter();
        EXPECT_DOUBLE_EQ(expected, actual);
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanAccessRadius) {
        auto expected = 2.5;
        auto circle = new Circle{expected};
        auto actual = circle->get_radius();
        EXPECT_DOUBLE_EQ(expected, actual);
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanModifyRadius) {
        auto circle = new Circle;
        auto expected = std::numbers::pi;
        circle->set_radius(expected);
        auto actual = circle->get_radius();
        EXPECT_DOUBLE_EQ(expected, actual);
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanDetermineDefaultCircleIsUnitCirle) {
        auto circle = new Circle;
        EXPECT_TRUE(circle->is_unit_circle());
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanDetermineUnitCirle) {
        auto circle = new Circle{1};
        EXPECT_TRUE(circle->is_unit_circle());
        delete circle;
    }

    TEST_F(Task3TestFixture, ItCanDetermineNonUnitCircle) {
        auto circle = new Circle{2};
        EXPECT_FALSE(circle->is_unit_circle());
        delete circle;
    }

#endif

} // end namespace csc232
